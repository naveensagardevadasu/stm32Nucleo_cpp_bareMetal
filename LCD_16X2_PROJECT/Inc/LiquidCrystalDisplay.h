/*
 * LiquidCrystalDisplay.h
 *
 *  Created on: Oct 2, 2024
 *      Author: root
 */

#ifndef LIQUIDCRYSTALDISPLAY_H_
#define LIQUIDCRYSTALDISPLAY_H_


#include "gpio_ref.h"

#define LCD_CLEAR DISPLAY	0x01
#define LCD_RETURNHOME		0x02
#define LCD_ENTRYMODE		0x04
#define LCD_DISPLAYCONTROL	0x08
#define LCD_CURSORSHIFT 	0x10
#define LCD_FUNCTIONSET 	0x20


void delay(uint32_t value)
{
	for(uint32_t i=0;i<value;i++)
	{
		for(uint32_t j=0;j<500000;j++);
	}
}

class LiquidCrystalDisplay
{
public:
	LiquidCrystalDisplay(GPIO_TYPEDEF* gpio_port,uint8_t RS,uint8_t EN,uint8_t D0,uint8_t D1,uint8_t D2, uint8_t D3,uint8_t D4,uint8_t D5,uint8_t D6,uint8_t D7);
	void LCD_Command(uint8_t command);
	void LCD_Data(uint8_t Data);
	void begin();
private:
	GPIO_TYPEDEF* __gpio_port__;
	uint8_t __RS__;
	uint8_t __EN__;
	uint8_t __D0__;
	uint8_t __D1__;
	uint8_t __D2__;
	uint8_t __D3__;
	uint8_t __D4__;
	uint8_t __D5__;
	uint8_t __D6__;
	uint8_t __D7__;
};


LiquidCrystalDisplay::LiquidCrystalDisplay(GPIO_TYPEDEF* gpio_port,uint8_t RS,uint8_t EN,uint8_t D0,uint8_t D1,uint8_t D2, uint8_t D3,uint8_t D4,uint8_t D5,uint8_t D6,uint8_t D7):
		__gpio_port__(gpio_port),
		__RS__(RS),
		__EN__(EN),
		__D0__(D0),
		__D1__(D1),
		__D2__(D2),
		__D3__(D3),
		__D4__(D4),
		__D5__(D5),
		__D6__(D6),
		__D7__(D7)
{
	pinMode(__gpio_port__,__RS__,OUTPUT);
	pinMode(__gpio_port__,__EN__,OUTPUT);
	pinMode(__gpio_port__,__D0__,OUTPUT);
	pinMode(__gpio_port__,__D1__,OUTPUT);
	pinMode(__gpio_port__,__D2__,OUTPUT);
	pinMode(__gpio_port__,__D3__,OUTPUT);
	pinMode(__gpio_port__,__D4__,OUTPUT);
	pinMode(__gpio_port__,__D5__,OUTPUT);
	pinMode(__gpio_port__,__D6__,OUTPUT);
	pinMode(__gpio_port__,__D7__,OUTPUT);
}


void LiquidCrystalDisplay::begin()
{
	LCD_Command(0x01);

}

void LiquidCrystalDisplay::LCD_Command(uint8_t command)
{
	digitalWrite(__gpio_port__,__RS__,LOW);
	digitalWrite(__gpio_port__,__D0__,(command & (1 << 0)));
	digitalWrite(__gpio_port__,__D1__,(command & (1 << 1)));
	digitalWrite(__gpio_port__,__D2__,(command & (1 << 2)));
	digitalWrite(__gpio_port__,__D3__,(command & (1 << 3)));
	digitalWrite(__gpio_port__,__D4__,(command & (1 << 4)));
	digitalWrite(__gpio_port__,__D5__,(command & (1 << 5)));
	digitalWrite(__gpio_port__,__D6__,(command & (1 << 6)));
	digitalWrite(__gpio_port__,__D7__,(command & (1 << 7)));

	digitalWrite(__gpio_port__,__EN__,HIGH);
	delay(10);
	digitalWrite(__gpio_port__,__EN__,LOW);
	delay(10);
}

void LiquidCrystalDisplay::LCD_Data(uint8_t data)
{
	digitalWrite(__gpio_port__,__RS__,LOW);
	digitalWrite(__gpio_port__,__D0__,(data & (1 << 0)));
	digitalWrite(__gpio_port__,__D1__,(data & (1 << 1)));
	digitalWrite(__gpio_port__,__D2__,(data & (1 << 2)));
	digitalWrite(__gpio_port__,__D3__,(data & (1 << 3)));
	digitalWrite(__gpio_port__,__D4__,(data & (1 << 4)));
	digitalWrite(__gpio_port__,__D5__,(data & (1 << 5)));
	digitalWrite(__gpio_port__,__D6__,(data & (1 << 6)));
	digitalWrite(__gpio_port__,__D7__,(data & (1 << 7)));

	digitalWrite(__gpio_port__,__EN__,HIGH);
	delay(10);
	digitalWrite(__gpio_port__,__EN__,LOW);
	delay(10);
}
#endif /* LIQUIDCRYSTALDISPLAY_H_ */
