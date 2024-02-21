/**
 * @file mvs.h
 * @author Heiko May (heiko@may-engineering.de)
 * @brief Library for reading a micro vibration sensors MVS1006.01, MVS0608.02, MVS0409.02 from Sensolute aka. B&B Leiterplattenbestückung
 * @version 0.1
 * @date 20240221
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef MVS_H
#define MVS_H

#include <Arduino.h>

/**
 * @brief 
 * 
 */
class MVS{
    public:
        void begin(int inpin);
        int getVibrationStatus();
        void setVibration
        void enable();
        void disable();
        void setSensitivity();
        uint getSensitivity();
    private:
        int _pin;
        int _enablepin;
        uint _sensitivity;
}



#endinf //MVS_H