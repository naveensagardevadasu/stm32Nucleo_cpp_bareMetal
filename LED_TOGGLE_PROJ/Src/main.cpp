

#include <stdint.h>
#include "gpio_ref.h"
#include "delay.h"



int main(void)
{
	pinMode(GPIOA,P5,OUTPUT);
	pinMode(GPIOC,P13,INPUT);
	Tim6_init();
	for(;;)
	{
		digitalWrite(GPIOA,P5,1);
		delay(100);
		digitalWrite(GPIOA,P5,0);
		delay(100);
	}
}
