#include <stdio.h>
#include <pigpio.h>

#define LED 15

int main() {
	if (gpioInitialise() < 0) {
		printf("Erro ao iniciar pigpio\n");
		return 1;
	}
	
	gpioSetMode(LED, PI_OUTPUT);
	
	while (1) {
		gpioWrite(LED, 1);
		gpioDelay(1000000);
		gpioWrite(LED, 0);
		gpioDelay(1000000);
	}
	
	gpioTerminate();
	return 0;
		
	}
