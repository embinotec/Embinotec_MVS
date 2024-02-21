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


#include <mvs.h>



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