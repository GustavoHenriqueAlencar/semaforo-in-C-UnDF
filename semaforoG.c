#include <stdio.h>
#include <pigpio.h>

#define LEDVD 14
#define LEDVM 18
#define LEDAM 15

int main() {
	if (gpioInitialise() < 0) {
		printf("Erro ao iniciar pigpio\n");
		return 1;
	}
	
	gpioSetMode(LEDVD, PI_OUTPUT);
	gpioSetMode(LEDVM, PI_OUTPUT);
	gpioSetMode(LEDAM, PI_OUTPUT);
	
	while (1) {
		gpioWrite(LEDVM, 1);
		gpioWrite(LEDVD, 0);
		gpioWrite(LEDAM, 0);
		gpioDelay(3000000);
		
		gpioWrite(LEDVM, 0);
		gpioWrite(LEDVD, 1);
		gpioWrite(LEDAM, 0);
		gpioDelay(2000000);
	
		gpioWrite(LEDVM, 0);
		gpioWrite(LEDVD, 0);
		gpioWrite(LEDAM, 1);
		gpioDelay(1000000);
		
		
	}
	
	gpioTerminate();
	return 0;
		
	}
