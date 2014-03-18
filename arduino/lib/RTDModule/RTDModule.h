/*
  RTDSensor.h - Library for openenergymonitor
  Created by Trystan Lea, May 16 2010
  Licenced under GPL
*/

#ifndef RTDModule_h
#define RTDModule_h

#include "Arduino.h"

class RTDModule
{
  public:

    void setPins(int _dpinA, int _dpinB, int _analogInPin);
    void calibration(int channel, double _calA,double _calB);
    double getTemperatureSmooth(int channel, int AVnum, int SMnum);
    double getTemperature(int channel);
    int getADC();
    int dval;
  private:

    int analogInPin;
    int addA;
    int addB;
    int dpinA;
    int dpinB;
    double scale[5];
    double offset[5];

    void setChannel(int channel);

};

#endif
