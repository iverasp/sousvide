/*
  RTDSensor.cpp - Library for openenergymonitor
  Created by Trystan Lea, April 27 2010
  Licenced under GPL
*/

#include "Arduino.h"
#include "RTDModule.h"

//-----------------------------------------------------------------------
// Set module pins
//-----------------------------------------------------------------------
void RTDModule::setPins(int _dpinA, int _dpinB, int _analogInPin)
{
   analogInPin = _analogInPin;
   dpinA = _dpinA;
   dpinB = _dpinB;

   pinMode(dpinA, OUTPUT);  
   pinMode(dpinB, OUTPUT);  
   dval=10;                  //A delay value..
}

//-----------------------------------------------------------------------
// Set calibration values
//
// Calibration needs to be set for every RTD input on the multiplexor
//-----------------------------------------------------------------------
void RTDModule::calibration(int channel, double _calA,double _calB)
{
   scale[channel] = _calA;
   offset[channel] = _calB;
}

//-----------------------------------------------------------------------
// Read temperature
//-----------------------------------------------------------------------
double RTDModule::getTemperature(int channel)
{
   setChannel(channel);
   double temperature = scale[channel] * analogRead(analogInPin) + offset[channel]; 
   return temperature;
}
//-----------------------------------------------------------------------

//-----------------------------------------------------------------------
// RAW analogread
//-----------------------------------------------------------------------
int RTDModule::getADC() { return analogRead(analogInPin); }
//-----------------------------------------------------------------------

//-----------------------------------------------------------------------
// setChannel is used to select the multiplexor channel to be read from
//-----------------------------------------------------------------------
void RTDModule::setChannel(int channel)
{
   //Multiplexor map
   if (channel==0){addA=0; addB=0;}
   if (channel==1){addA=1; addB=0;}
   if (channel==2){addA=0; addB=1;}
   if (channel==3){addA=1; addB=1;}
   
   //Set the multiplexor
   if (addA==1) digitalWrite(dpinA,HIGH); else digitalWrite(dpinA,LOW);
   if (addB==1) digitalWrite(dpinB,HIGH); else digitalWrite(dpinB,LOW);

   delay(dval);  //Here is the delay
}
//-----------------------------------------------------------------------
