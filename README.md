MCP4922-Arduino-SPI-Library
===========================
This is a Library for using MCP4922 DAC digital to analog converter with Arduino.

The Library uses hardware SPI to communicate with the DAC and there are Examples
for how to use the DAC.

Pins 51,52,53 is for ArduinoMEGA2560.

Pins 10,11,13 is for Arduino Uno.

Connections to make:
   
Vdd   	DAC pin 1 to MEGA pin 5V;

N/C   	DAC pin 2 to nothing;

!CS   	DAC pin 3 to MEGA pin 53/10 CS;

SCK   	DAC pin 4 to MEGA pin 52/13 SCK;

SDI   	DAC pin 5 to MEGA pin 51/11 MOSI;

N/C   	DAC pin 6 to nothing;

N/C   	DAC pin 7 to nothing;

!LDAC 	DAC pin 8 to MEGA pin 5;

!SHDN 	DAC pin 9 to MEGA pin 5V;

VoutB 	DAC pin 10 to MEGA pin A3;

VrefB 	DAC pin 11 to MEGA pin 5V;

Vss   	DAC pin 12 to MEGA pin GND;

VrefA 	DAC pin 13 to MEGA pin 5V;

VoutA 	DAC pin 14 to MEGA pin A2;

The Examples Writes to the DAC and then reads back the DAC outputs using A2/A3 pins then print result to serial.