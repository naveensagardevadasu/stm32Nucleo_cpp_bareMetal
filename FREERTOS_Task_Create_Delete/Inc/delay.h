/*
 * delay.h
 *
 *  Created on: Oct 15, 2024
 *      Author: root
 */

#ifndef DELAY_H_
#define DELAY_H_
#include "stm32f446.h"

void Tim6_init()
{
	RCC->APB1ENR |=(0x01<<4);
}

void delay(uint32_t _delay_)
{
	TIM6->PSC = (16000 - 1);
	TIM6->ARR = (2 - 1) * _delay_;
	TIM6->CNT = 0;
	TIM6->CR1 |= (0x01 << 0);
	while(!((TIM6->SR) & 0x01));
	TIM6->SR = 0x00;
	TIM6->CR1 &= ~(0x01 << 0);
}




#endif /* DELAY_H_ */
