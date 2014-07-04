/*
  SHS.h - Library for reading values from a FC-28 Soil humidity 
  sensor, for now it only displays a digital or analog value, 
  for the sensor it means that the drier the soil the higher the 
  analog value, and when calibrated if it's dry the digital 
  value will be HIGH
  
*/

#ifndef SHS_h
#define SHS_h

#include "Arduino.h"

class SHS
{
  public:
    SHS(int pin, int pin2);
    int analog();
    bool digital();
    bool tresh(int tresh);
    int tresh2(int tre, int tre2);
  private:
    int _tre;
    int _tre2;
    int _tresh;
    int _pin;
    int _pin2;
};

#endif
