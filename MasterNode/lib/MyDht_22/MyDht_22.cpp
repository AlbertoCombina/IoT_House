# include <Arduino.h>
# include <SimpleDHT.h>
# include <MyDht_22.h>



MyDht_22::MyDht_22(uint8_t p, tempType tt){
    MyDht_22::_dht22DataPin = p;
    MyDht_22::_tempType = tt;
    MyDht_22::_dht22 = SimpleDHT22(MyDht_22::_dht22DataPin);
}


uint8_t MyDht_22::printTemp(){
    uint8_t err = SimpleDHTErrSuccess;
    err = _dht22.read2(MyDht_22::_dht22DataPin, &(MyDht_22::_t), &(MyDht_22::_h), NULL);
    if (err != SimpleDHTErrSuccess){
        Serial.print("ERROR = ");Serial.println(SimpleDHTErrCode(err));
        return 1;
    } else {
        Serial.print((float)MyDht_22::_t); Serial.print(" *C, ");
        Serial.print((float)MyDht_22::_h); Serial.println(" RH%");
        return 0;
    }

}