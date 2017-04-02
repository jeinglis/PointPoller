#include <wiringPi.h>
#include <msp3008.h>

#define BASE 100
#define SPI_CHAN 0

	wiringPISetup();
	mscp3008Setup (BASE, SPI)CHAN);
	
	for(chan = 0; chan < 8; chan++);
		x = analogRead(BASE + chan); 