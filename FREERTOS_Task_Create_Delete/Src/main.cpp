

#include <stdint.h>
#include "gpio_ref.h"
#include "delay.h"
#include "serial.h"


#include "FreeRTOS.h"
#include "task.h"




TaskHandle_t Task1_handle = NULL;



void Task1_callback(void *parameters)
{
	for(;;)
	{

	}
}



int main(void)
{

	xTaskCreate(Task1_callback,"Task-1",200,(void*)0,tskIDLE_PRIORITY,&Task1_handle);
	vTaskStartScheduler();
    /* Loop forever */
	for(;;);
}
