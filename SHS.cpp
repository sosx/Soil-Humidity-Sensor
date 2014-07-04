#include "Arduino.h"
#include "SHS.h"

SHS::SHS(int pin, int pin2)
{
  pinMode(pin, INPUT);
  _pin = pin;
  _pin2 = pin2;
}

bool SHS::digital()
{
  return(digitalRead(_pin));
}

int SHS::analog()
{
  return(analogRead(_pin2));
}

bool SHS::tresh(int tresh)
{    
    _tresh = tresh;
    Serial.print(analogRead(_pin2));
    if(_tresh <= analogRead(_pin2))
    {
      return(1);
    }
    else
    {
      return(0);
    }
}

int SHS::tresh2(int tre, int tre2)
{
    _tre = tre;
    _tre2 = tre2;
    
    if(analogRead(_pin2) <= _tre)
    {
     return(0);
    }
    else if(analogRead(_pin2) <= _tre2)
    {
     return(1);
    }
    else
    {
    return(2);
    }
}  

