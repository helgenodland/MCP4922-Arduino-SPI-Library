/* http://arduino.cc/en/Hacking/LibraryTutorial */
/* http://ww1.microchip.com/downloads/en/DeviceDoc/22250A.pdf */

#include <MCP4922.h>
#include <SPI.h>
MCP4922 DAC(51,52,53,5);    // (MOSI,SCK,CS,LDAC) define Connections for MEGA_board, 
//MCP4922 DAC(11,13,10,5);    // (MOSI,SCK,CS,LDAC) define Connections for UNO_board, 

void setup()
{
  Serial.begin(9600);
  SPI.begin();
}

void loop()
{
  for(int i = 0 ; i < 4096 ; i++)
  {
   DAC.Set(4095-i,i); delay(10);
   Serial.print (analogRead(A2)); Serial.print("  "); Serial.println (analogRead(A3));
  }
}

