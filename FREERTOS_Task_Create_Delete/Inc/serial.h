

#ifndef SERIAL_H_
#define SERIAL_H_

#include "stm32f446.h"
#include <string>


#define BAUD_1200 0x3415
#define BAUD_2400 0x1A0B
#define BAUD_4800 0xD05
#define BAUD_9600 0x683
#define BAUD_19200 0x341
#define BAUD_31250 0x200
#define BAUD_38400 0x1A1
#define BAUD_57600 0x116
#define BAUD_74880 0xD6
#define BAUD_115200 0x8B
#define BAUD_230400 0x45
#define BAUD_250000 0x40
#define BAUD_460800 0x23
#define BAUD_500000 0x20
#define BAUD_921600 0x11



using namespace std;

class Serial
{
public:
	Serial(USART_TYPEDEF* usart);
	void begin(uint32_t baud);
	void print(string str);
	void print(int num);
	void println(string str);
	void println();
	void print(char chr);
	void print(unsigned int num);
	void print(float num);
	void print(double num);
	void sendChar(uint8_t data);
	uint8_t read();
private:
	USART_TYPEDEF* __usart__;
};

Serial::Serial(USART_TYPEDEF* usart):
		__usart__(usart)
{
	if(__usart__ == USART2)
	{
		RCC->APB1ENR |= (1 << 17);
		RCC->AHB1ENR |= (1 << 0);

		GPIOA->MODER |= (2 << 4);
		GPIOA->MODER |= (2 << 6);
		GPIOA->OSPEEDR |= (3 << 4) | (3 << 6);
		GPIOA->AFR[0] |= (7 << 8);
		GPIOA->AFR[0] |= (7 << 12);
	}


}

void Serial::begin(uint32_t baud)
{
	__usart__->CR1 = 0x00;
	__usart__->CR1 |= (1 << 13);
	__usart__->CR1 &= ~(1 << 12);
	__usart__->BRR = baud;
	__usart__->CR1 |= (1 << 2);
	__usart__->CR1 |= (1 << 3);
}

void Serial::sendChar(uint8_t data)
{
	__usart__->DR = data;
	while (!(__usart__->SR & (1<<6)));
	__usart__->SR &= ~(1 << 6);
}

void Serial::print(string str)
{
	for(char &c : str)sendChar(c);
}

void Serial::print(int num)
{
	print(to_string(num));
}

void Serial::print(char chr)
{
	print(to_string(chr));
}

void Serial::print(unsigned int num)
{
	print(to_string(num));
}

void Serial::print(float num)
{
	print(to_string(num));
}

void Serial::print(double num)
{
	print(to_string(num));
}


void Serial::println(string str)
{
	print(str);
	sendChar('\n');
}

void Serial::println()
{
	sendChar('\n');
}

uint8_t Serial::read(void)
{
	while (!(__usart__->SR & (1<<5)));
	return __usart__->DR;
}


#endif /* SERIAL_H_ */
