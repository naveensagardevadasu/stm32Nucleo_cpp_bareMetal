/*
 * gpio_ref.h
 *
 *  Created on: Sep 25, 2024
 *      Author: root
 */

#ifndef GPIO_REF_H_
#define GPIO_REF_H_

#include "stm32f446.h"


#define INPUT 			0
#define OUTPUT 			1
#define INPUT_PULLUP 	2
#define INPUT_PULLDOWN 	3


void pinMode(GPIO_TYPEDEF* gpio_port,uint8_t pin,uint8_t type);
void digitalWrite(GPIO_TYPEDEF* gpio_port,uint8_t pin,bool value);
bool digitalRead(GPIO_TYPEDEF* gpio_port,uint8_t pin);


void pinMode(GPIO_TYPEDEF* gpio_port,uint8_t pin,uint8_t type)
{
	if(gpio_port == GPIOA) RCC->AHB1ENR |= (1 << 0);
	if(gpio_port == GPIOB) RCC->AHB1ENR |= (1 << 1);
	if(gpio_port == GPIOC) RCC->AHB1ENR |= (1 << 2);
	if(gpio_port == GPIOD) RCC->AHB1ENR |= (1 << 3);
	if(gpio_port == GPIOE) RCC->AHB1ENR |= (1 << 4);
	if(gpio_port == GPIOF) RCC->AHB1ENR |= (1 << 5);
	if(gpio_port == GPIOG) RCC->AHB1ENR |= (1 << 6);
	if(gpio_port == GPIOH) RCC->AHB1ENR |= (1 << 7);

	switch(type)
	{
		case 0:
			gpio_port->MODER &= ~(1 << (pin*2));
			gpio_port->PUPDR &= ~(1 << (pin*2));
			break;
		case 1:
			gpio_port->MODER |= (1 << (pin*2));
			break;
		case 2:
			gpio_port->MODER &= ~(1 << (pin*2));
			gpio_port->PUPDR |= (1 << (pin*2));
			break;
		case 3:
			gpio_port->MODER &= ~(1 << (pin*2));
			gpio_port->PUPDR |= (2 << (pin*2));
			break;

	}
}

void digitalWrite(GPIO_TYPEDEF* gpio_port,uint8_t pin,bool value)
{
	gpio_port->ODR = (value << pin);
}

bool digitalRead(GPIO_TYPEDEF* gpio_port,uint8_t pin)
{
	return (gpio_port->IDR & (1 << pin)) ? 1 : 0;
}

#endif /* GPIO_REF_H_ */
