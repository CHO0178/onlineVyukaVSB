#include <Arduino.h>

void setup(){
    
}

void loop(){
    
}


/**
 * @brief vrací hodnotu informaci o tom, zda je auto před závorou nebo ne 
 * 
 * @param pin číslo pinu, na kterém je připojený senzor
 * @return true pokud je auto před závorou
 */
bool isPressented(int pin)
{
    bool answer = digitalRead(pin) == 0;
    return answer;
}