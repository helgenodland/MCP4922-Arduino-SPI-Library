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
  DAC.Set(0,0); delay(500);
  Serial.print (analogRead(A2)); Serial.print("  "); Serial.println (analogRead(A3));
  DAC.Set(2048,2048); delay(500);
  Serial.print (analogRead(A2)); Serial.print("  "); Serial.println (analogRead(A3));
  DAC.Set(4095,4095); delay(500);
  Serial.print (analogRead(A2)); Serial.print("  "); Serial.println (analogRead(A3));
}

