#include <biblioteca.h>
#include <iostream>
const String exemplo = "exemplo";
bool nivel;
int alto = 2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(500);
  alto = 1;
  if (alto== 1) {
  delay(5);
}
  while (alto> 1) {
  delay(1);
}
}
