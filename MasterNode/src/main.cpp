#include <Arduino.h>

int c = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {

  c++;
  Serial.println(c);

  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
