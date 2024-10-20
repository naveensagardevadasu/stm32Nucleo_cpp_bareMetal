

#include <stdint.h>
#include "stm32f446.h"


int main(void)
{
    /* Loop forever */

	RCC->AHB1ENR |= (1 << 0);
	for(;;);
}
