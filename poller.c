//#include <wiringPi.h>
#include "mcp3008.h"
#include <stdio.h>

//#define BASE 100
//#define SPI_CHAN 0
#define clock 18
#define MOSI 24
#define MISO 23
#define CS 25


int main() {

    //wiringPISetup();
   // mscp3008Setup (BASE, SPI)CHAN);

/* Prints the value of the input "0" of the MCP 3008 
    */
    int value = mcp3008_value(0, clock, MOSI, MISO, CS);
    printf("%d", value);

    //for(chan = 0; chan < 8; chan++);
    //x = analogRead(BASE + chan); 
  return 0;
}