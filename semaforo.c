#include <stdio.h>
#include <wiringPi.h>

#define LEDg 15
#define LEDy 16
#define LEDr 1


int main(void) {
	if (wiringPiSetup() == -1) {
		printf("falha ao iniciar wiringPi\n");
		return 1;
	}
	
	pinMode(LEDg, OUTPUT); 
	pinMode(LEDy, OUTPUT); 
	pinMode(LEDr, OUTPUT); 
	
	while(1) {
	
	printf("acendendo o led\n");
	digitalWrite(LEDg, HIGH);
	delay(2000);
	
	printf("apagando o LED\n");
	digitalWrite(LEDg, LOW);
	
	printf("acendendo o led\n");
	digitalWrite(LEDy, HIGH);
	delay(1000);
	
	printf("apagando o LED\n");
	digitalWrite(LEDy, LOW);
	
	printf("acendendo o led\n");
	digitalWrite(LEDr, HIGH);
	delay(3000);
	
	printf("apagando o LED\n");
	digitalWrite(LEDr, LOW);
	
}
	return 0;
	
  }
	
