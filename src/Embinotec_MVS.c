/**
 * @file mvs.cpp
 * @author Heiko May (heiko@may-engineering.de)
 * @brief 
 * @version 0.1
 * @date 20240221
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <Embinotec_MVS.h>



/**
 * @brief Constructor
 * @param inpin Input pin
 * @param enablepin Enable pin for hardware module MVS01
 */
void MVS::MVS(int inpin, int enablepin){
    _pin = pin;
    _enable = enablepin;
};


void MVS::MVS(int inpin){
    _pin = inpin;

}


/**
 * @brief 
 * 
 */
void MVS::begin(){
    pinMode(_pin, INPUT);
    pinMode(_enablepin);
    digitalWrite(_enablepin, HIGH); //!< Turn MVS01 module on
}


/**
 * @brief Get the Vibration Status object
 * 
 * @return int 
 */
int MVS::getVibrationStatus(){



}

/**
 * @brief 
 * 
 */
void MVS::enable(){
    digitalWrite(_enablepin, HIGH);
}

/**
 * @brief 
 * 
 */
void MVS::disable(){
    digitalWrite(_enablepin, LOW);

}


/**
 * @brief Set the Sensitivity object
 * @param 
 */
void setSensitivity(uint sensitivity){
    _sensitivity = sensitivity;
}

/**
 * @brief Get the Sensitivity object
 * 
 * @return _sensitivity
 */
uint getSensitivity(){
    return _sensitivity;
}

/**
 * @brief Set the Pin object
 * 
 * @param pin 
 * @return ** void 
 */
void setPin(int pin){
    _pin = pin;
}


/**
 * @brief Get the Orientation object
 * 
 * Orientation in MVS1006.01 is defined from top up mounting turining through x-axis. -90 to 90 degrees. All other degrees is bottom up.
 * Orientation will be calcualted with every rest longer three times detection cycle.
 * 
 * @return uint orientation value; 
 */
uint getOrientation(){
    return _orientation;
}