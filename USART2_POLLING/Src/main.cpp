

#include <stdint.h>
#include "gpio_ref.h"
#include "delay.h"
#include "serial.h"

Serial serial(USART2);


int main(void)
{
	serial.begin(BAUD_9600);
	Tim6_init();
	int a = 0;
    while(1)
    {
    	serial.print("Hello world:");
    	serial.print(a);
    	serial.println();
    	a++;
    	delay(500);
    }
}
