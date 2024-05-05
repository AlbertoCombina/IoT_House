#include <Arduino.h>
#include <master_node_pins.h>
#include <dht_22.h>


void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(test(DHT_22_DATA_PIN));
  delay(5000);
}
