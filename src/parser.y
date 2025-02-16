%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#ifdef _WIN32
    #include <io.h>
    #define access _access
    #define F_OK 0
#else
    #include <unistd.h>
#endif

#define OUTPUT_BUFFER_SIZE 100000

#define OUTPUT_BUFFER_SIZE 100000

char outputBuffer[OUTPUT_BUFFER_SIZE];
int outIndex = 0;
int errorOccurred = 0;

void appendOutput(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    int n = vsnprintf(outputBuffer + outIndex, OUTPUT_BUFFER_SIZE - outIndex, fmt, args);
    if(n > 0)
        outIndex += n;
    va_end(args);
}

void yyerror(const char *s);
int yylex(void);

/* --- Estruturas para analise semantica --- */
typedef enum { TYPE_INT, TYPE_BOOL, TYPE_TEXT } VarType;

typedef struct Symbol {
    char *name;
    VarType type;
    int isConst;             /* 1 se for constante, 0 se variavel */
    struct Symbol *next;
} Symbol;

Symbol *symbolTable = NULL;
int currentConst = 0;  /* Flag para identificar declaracao constante */

/* Procura um simbolo na tabela */
Symbol* lookupSymbol(const char *name) {
    Symbol *s = symbolTable;
    while (s != NULL) {
        if (strcmp(s->name, name) == 0)
            return s;
        s = s->next;
    }
    return NULL;
}

/* Insere um novo simbolo na tabela. Emite erro se ja existir. */
void insertSymbol(const char *name, VarType type, int isConst) {
    if(lookupSymbol(name) != NULL) {
        fprintf(stderr, "Erro semantico: Redeclaracao da variavel '%s'\n", name);
        exit(1);
    }
    Symbol *s = malloc(sizeof(Symbol));
    s->name = strdup(name);
    s->type = type;
    s->isConst = isConst;
    s->next = symbolTable;
    symbolTable = s;
}
%}

%union {
    int int_val;    /* Para NUMERO */
    char* str_val;  /* Para IDENT e STRING */
}

%token INCLUIR CONFIG FIM REPITA ESPERAR CONFIGURAR_SERIAL CONFIGURAR LER_DIGITAL LIGAR DESLIGAR MUDAR
%token VAR ESCREVER_SERIAL LER_SERIAL CONSTANTE LER_ANALOGICO ESCREVER_ANALOGICO
%token INTEIRO BOOLEANO TEXTO SAIDA ENTRADA SSID SENHA HOST CONECTAR_WIFI CHECAR_WIFI
%token IGUAL DOISPONTOS SE SENAO ENTAO ENQUANTO DEFINIR 
%token TRUE FALSE INICIAR_HTTP RECEBER_HTTP
%token <int_val> NUMERO
%token <str_val> IDENT STRING COMENTARIO OPERADOR OPERADOR_COMPARACAO

%%

entrada:
    inclusao_list configuracao repeticao
    ;

inclusao_list:
    inclusao inclusao_list
    |
    ;

inclusao:
    INCLUIR IDENT { 
        printf("#include <%s.h>\n", $2);  
        free($2);
    }
    | CONSTANTE {
        currentConst = 1; 
        printf("const "); } declaracao {currentConst = 0;}
    | declaracao 
    | COMENTARIO { printf("%s\n", $1); free($1); }
    | comando_wifi
    | DEFINIR IDENT NUMERO { 
        insertSymbol($2, TYPE_INT, currentConst);
        printf("#define %s %d\n", $2, $3); free($2); }
    ;

configuracao:
    CONFIG { 
        printf("\nvoid setup() {\n");
    }
    comando_list FIM {
        printf("}\n");
    }
    ;

repeticao:
    REPITA { 
        printf("\nvoid loop() {\n");
    } comando_list FIM {
        printf("}\n");
    }
    ;

comando_list:
    { printf("  "); } comando comando_list
    |
    ;

comando:
    controle_fluxo
    | ESPERAR NUMERO 
        { printf("delay(%d);\n", $2); }
    | CONFIGURAR_SERIAL NUMERO 
        { printf("Serial.begin(%d);\n", $2); }
    | ESCREVER_SERIAL { printf("Serial.print("); } item { printf(");\n"); }
    | CONFIGURAR IDENT { printf("pinMode(%s, ", $2); free($2); } entrada_saida { printf(");\n"); }
    | ligar_desligar
    | MUDAR IDENT { printf("digitalWrite(%s, ", $2); free($2); } item { printf(");\n"); }
    | IDENT IGUAL LER_DIGITAL IDENT 
        { printf("%s = digitalRead(%s);\n", $1, $4); free($1); free($4); }
    | VAR BOOLEANO DOISPONTOS IDENT IGUAL LER_DIGITAL IDENT 
        {   insertSymbol($4, TYPE_BOOL, currentConst);
            printf("bool %s = digitalRead(%s);\n", $4, $7); free($4); free($7); }
    | IDENT IGUAL LER_ANALOGICO IDENT 
        {   Symbol *s = lookupSymbol($1);
            if (!s) { yyerror("Variavel nao declarada"); exit(1); }
            if(s->isConst) { yyerror("Tentativa de atribuir a constante"); exit(1); }
            if(s->type != TYPE_INT) { yyerror("Tipo incompativel na atribuicao (esperado INTEIRO)"); exit(1); }
            printf("%s = analogRead(%s);\n", $1, $4); free($1); free($4); }
    | VAR INTEIRO DOISPONTOS IDENT IGUAL LER_ANALOGICO IDENT 
        { insertSymbol($4, TYPE_INT, currentConst);
          printf("int %s = analogRead(%s);\n", $4, $7); free($4); free($7); }
    | ESCREVER_ANALOGICO IDENT { printf("analogWrite(%s, ", $2); free($2); } item { printf(");\n"); }
    | declaracao
    | atribuicao
    | COMENTARIO { printf("%s\n", $1); free($1); }
    | comando_wifi
    | comando_http
    ;

comando_http:
    INICIAR_HTTP { printf("  HTTPClient http;\n  http.begin(url);\n"); }
    | RECEBER_HTTP { printf(
                            "  int httpResponseCode = http.GET();\n"
                            "  if (httpResponseCode > 0) {\n"
                            "    Serial.print(\"HTTP \");\n"
                            "    Serial.println(httpResponseCode);\n"
                            "    String payload = http.getString();\n"
                            "    Serial.println();\n"
                            "    Serial.println(payload);\n"
                            "  }\n"
                            "  else {\n"
                            "    Serial.print(\"Error code: \");\n"
                            "    Serial.println(httpResponseCode);\n"
                            "  }\n");
     }
    ;

comando_wifi:
    SSID IGUAL STRING { printf("const char* ssid = %s;\n", $3); free($3); }
    | SENHA IGUAL STRING { printf("const char* password = %s;\n", $3); free($3); }
    | HOST IGUAL STRING { printf("const char* host = %s;\n", $3); free($3); }
    | CONECTAR_WIFI SSID SENHA { printf("WiFi.begin(ssid, password);\n"); }
    | CHECAR_WIFI { printf("while (WiFi.status() != WL_CONNECTED) {\n    delay(500);\n}\n"); }
    ;
entrada_saida:
    ENTRADA { printf("INPUT"); }
    | SAIDA { printf("OUTPUT"); }
    ;

ligar_desligar:
    LIGAR { printf("digitalWrite("); } item { printf(", true);\n"); }
    | DESLIGAR { printf("digitalWrite("); } item { printf(", false);\n"); }
    ;

item:
    IDENT { 
        /*verificar se a variavel foi declarada */
        if(lookupSymbol($1) == NULL) {
            yyerror("Variavel nao declarada em ESCREVER_SERIAL");
            exit(1);
        }
        printf("%s", $1); free($1); }
    | NUMERO { printf("%d", $1); }
    | TRUE { printf("true"); }
    | FALSE { printf("false"); }
    | STRING { printf("%s", $1); free($1); }
    ;


expressao:
    item
    | item OPERADOR {
        printf(" %s ", $2);
        free($2);
    } item
    ;

atribuicao:
    IDENT IGUAL { 
        Symbol *s = lookupSymbol($1);
        if (!s) { yyerror("Variavel nao declarada"); exit(1); }
        if(s->isConst) { yyerror("Tentativa de atribuir a uma constante"); exit(1); }
        printf("%s = ", $1); free($1); } expressao { printf(";\n"); }
    | VAR TEXTO DOISPONTOS IDENT IGUAL LER_SERIAL {
        insertSymbol($4, TYPE_TEXT, currentConst);
        printf("String %s = Serial.readString();\n", $4);
        free($4);
    }
    ;

declaracao:
    VAR INTEIRO DOISPONTOS IDENT { 
        insertSymbol($4, TYPE_INT, currentConst);
        printf("int %s;\n", $4); 
        free($4); 
    }
    | VAR BOOLEANO DOISPONTOS IDENT { 
        insertSymbol($4, TYPE_BOOL, currentConst);
        printf("bool %s;\n", $4); 
        free($4); 
    }
    | VAR TEXTO DOISPONTOS IDENT { 
        insertSymbol($4, TYPE_TEXT, currentConst);
        printf("String %s;\n", $4); 
        free($4); 
    }
    | VAR INTEIRO DOISPONTOS IDENT IGUAL { 
        insertSymbol($4, TYPE_INT, currentConst);
        printf("int %s = ", $4);
        free($4);
    } expressao { printf(";\n"); }
    | VAR BOOLEANO DOISPONTOS IDENT IGUAL { 
        insertSymbol($4, TYPE_BOOL, currentConst);
        printf("bool %s = ", $4);
        free($4);
    } expressao { printf(";\n"); }
    | VAR TEXTO DOISPONTOS IDENT IGUAL { 
        insertSymbol($4, TYPE_TEXT, currentConst);
        printf("String %s = ", $4);
        free($4);
    } expressao { printf(";\n"); }
    ;


controle_fluxo:
    SE {printf("if ");} condicao ENTAO {printf("{\n");}
    comando_list fim_fluxo
    | ENQUANTO {printf("while ");} condicao {printf("{\n");} comando_list fim_fluxo
    ;

condicao:
    { printf("(");} item OPERADOR_COMPARACAO { printf("%s ", $3);} item {
        printf(") ");
        free($3);
    }
    ;

fim_fluxo:
    FIM { 
        printf("}\n");
    }
    | SENAO {
        printf("else {\n");
    } comando_list fim_fluxo  { 
        printf("}\n");
    }
    ;

%%

int main() {
    yyparse();
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
    printf("*ERRO AQUI*");
}