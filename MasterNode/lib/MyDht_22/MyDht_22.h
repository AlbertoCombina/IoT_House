# pragma once

# include <Arduino.h>
# include <SimpleDHT.h>

class MyDht_22 
{
    public:
        // VARs
        enum class tempType : uint8_t{
            CELSIUS,
            FARHENHEIT
        };

        float_t _t;
        float_t _h;


        // Constructor
        MyDht_22(uint8_t p, tempType tt);

        // Printer function
        uint8_t printTemp();


    private:
        uint8_t _dht22DataPin;
        tempType _tempType;
        SimpleDHT22 _dht22;


};