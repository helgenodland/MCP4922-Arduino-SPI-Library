
/******************************************************************************
*  Device:   MCP4922                                                          *
*  Platform: Arduino                                                          *
*  File:     MCP4922.h                                                        *
*                                                                             *
*  MCP4922.cpp - Library for driving MCP4922 2 channel DAC using hardware SPI.*
*  Created by Helge Nodland, January 1, 2015.                                 *
*  Released into the public domain.                                           *
******************************************************************************/



#ifndef MCP4922_h
#define MCP4922_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif


class MCP4922
{
  public:
    MCP4922(int SDI, int SCK,int CS, int LDAC);
    void Set(int A, int B);

  private:
    int _SDI;
    int _SCK;
    int _CS;
    int _LDAC;


    //void sendSPIHeader();
    void sendIntValueSPI(int A, int B);
    //void sendSPIClock();
};

#endif
