#include <stdio.h>
#include <wiringPi.h>

#define LED 16


int main(void) {
	if (wiringPiSetup() == -1) {
		printf("falha ao iniciar wiringPi\n");
		return 1;
	}
	
	pinMode(LED, OUTPUT); 
	
	printf("acendendo o led\n");
	digitalWrite(LED, HIGH);
	delay(2000);
	
	printf("apagando o LED\n");
	digitalWrite(LED, LOW);
	
	return 0;
	
  }
	
