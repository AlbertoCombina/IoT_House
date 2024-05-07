#include <Arduino.h>
#include <master_node_pins.h>
#include <MyDht_22.h>

MyDht_22 inst_dht22 = MyDht_22(DHT_22_DATA_PIN , MyDht_22::tempType::CELSIUS);
void setup() {
  Serial.begin(9600);
}

void loop() {
  static unsigned long currMillis = millis();
  static uint8_t ret = 0;
  if (millis() - currMillis > 5000 || ret != 0){
    ret = inst_dht22.printTemp();
    currMillis = millis();
  }
}
