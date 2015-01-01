/*
  MCP4922.cpp - Library for driving MCP4922 2 channel DAC using hardware SPI.
  Created by Helge Nodland, January 1, 2015.
  Released into the public domain.
*/


/*************************************************************************
**  Device: MCP4922                                                 	**
**  File:   AH_MCP4922.h - Library for get out analog voltage          	**
**								    	**
**  Created by A. Hinkel 2011-12-28                                 	**
**  download from "http://www.alhin.de/arduino"  			**
**									**
**  Based on Code from:							**
**  http://www.sinneb.net/2010/06/mcp4921-12bit-dac-voltage-controller/ **
**									**
**  Released into the public domain.  		                    	**
**                                                                  	**
**                                                                  	**
*************************************************************************/


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

/******************************** 
*				*
* DAC=LOW  => DAC_A select	*
* DAC=HIGH => DAC_B select	*
*				*
* GAIN=LOW  => 2x gain select	*
* GAIN=HIGH => 1x gain select	*
*				*
********************************/