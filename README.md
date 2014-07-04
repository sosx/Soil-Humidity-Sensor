An arduino library for using a Soil Humidity sensor FC-28. Possibly will contain other types of libraries like a Python
library for RaspPi

For anyone wondering how to install arduino libraries just add a new folder to the libraries folder in arduino and copy the 
.h and .cpp files there.

This library as of now has four functions simple analog and digital humidity readings that a digitalRead or analogRead would 
do in arduino, a function to set a desired humidity level from reading analog values (like what the digital pin sends out,
but done with code to avoid having to use the analog and digital pins) and a function to add a "dry" value as well as a 
"too wet" value to facilitate varying temperatures.

If I haven't done it and someone wishes to translate, please do.
