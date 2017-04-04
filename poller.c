#include <wiringPi.h>
#include <msp3008.h>
#include <stdio.h>

#define BASE 100
#define SPI_CHAN 0


int main() {

    wiringPISetup();
    mscp3008Setup (BASE, SPI)CHAN);

/* Prints the value of the input "0" of the MCP 3008 
	*/
    int value = mcp3008_value(0, 4, 14, 15, 17);
    printf("%d", value);

    for(chan = 0; chan < 8; chan++);
    x = analogRead(BASE + chan); 
  return 0;
}