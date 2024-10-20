

#ifndef STM32F446_H_
#define STM32F446_H_


#define __IO volatile

#define PERIPHERAL_BASE_ADDRESS 0x40000000U

#define APB1_OFFSET_ADDRESS 0x00U
#define APB1_BASE_ADDRESS (PERIPHERAL_BASE_ADDRESS + APB1_OFFSET_ADDRESS)

#define APB2_OFFSET_ADDRESS 0x10000U
#define APB2_BASE_ADDRESS (PERIPHERAL_BASE_ADDRESS + APB2_OFFSET_ADDRESS)

#define AHB1_OFFSET_ADDRESS 0X20000U
#define AHB1_BASE_ADDRESS (PERIPHERAL_BASE_ADDRESS + AHB1_OFFSET_ADDRESS)

#define RCC_OFFSET_ADDRESS 0x3800U
#define RCC_BASE (AHB1_BASE_ADDRESS + RCC_OFFSET_ADDRESS)


typedef struct
{
	__IO uint32_t CR;
	__IO uint32_t PLLCFGR;
	__IO uint32_t CFGR;
	__IO uint32_t CIR;
	__IO uint32_t AHB1RSTR;
	__IO uint32_t AHB2RSTR;
	__IO uint32_t AHB3RSTR;
	uint32_t RESERVED0;
	__IO uint32_t APB1RSTR;
	__IO uint32_t APB2RSTR;
	uint32_t RESERVED1[2];
	__IO uint32_t AHB1ENR;
	__IO uint32_t AHB2ENR;
	__IO uint32_t AHB3ENR;
	uint32_t RESERVED2;
	__IO uint32_t APB1ENR;
	__IO uint32_t APB2ENR;
	uint32_t RESERVED3[2];
	__IO uint32_t AHB1LPENR;
	__IO uint32_t AHB2LPENR;
	__IO uint32_t AHB3LPENR;
	uint32_t RESERVED4;
	__IO uint32_t APB1LPENR;
	__IO uint32_t APB2LPENR;
	uint32_t RESERVED5[2];
	__IO uint32_t BDCR;
	__IO uint32_t CSR;
	uint32_t RESERVED6[2];
	__IO uint32_t SSCGR;
	__IO uint32_t PLLI2SCFGR;
	__IO uint32_t PLLSAICFGR;
	__IO uint32_t DCKCFGR;
	__IO uint32_t CKGATENR;
	__IO uint32_t DCKCFGR2;
}RCC_TYPEDEF;


typedef struct
{
	__IO uint32_t MODER;
	__IO uint32_t OTYPER;
	__IO uint32_t OSPEEDR;
	__IO uint32_t PUPDR;
	__IO uint32_t IDR;
	__IO uint32_t ODR;
	__IO uint32_t BSRR;
	__IO uint32_t LCKR;
	__IO uint32_t AFR[2];
}GPIO_TYPEDEF;


typedef struct
{
	__IO uint32_t CR1;
	__IO uint32_t CR2;
	__IO uint32_t SMCR;
	__IO uint32_t DIER;
	__IO uint32_t SR;
	__IO uint32_t EGR;
	__IO uint32_t CCMR1;
	__IO uint32_t CCMR2;
	__IO uint32_t CCER;
	__IO uint32_t CNT;
	__IO uint32_t PSC;
	__IO uint32_t ARR;
	__IO uint32_t RCR;
	__IO uint32_t CCR1;
	__IO uint32_t CCR2;
	__IO uint32_t CCR3;
	__IO uint32_t CCR4;
	__IO uint32_t BDTR;
	__IO uint32_t DCR;
	__IO uint32_t DMAR;
}TIM_TYPEDEF;

#define RCC ((RCC_TYPEDEF*)RCC_BASE)


#define GPIOA_OFFSET_ADDRESS 0x000U
#define GPIOA_BASE_ADDRESS (AHB1_BASE_ADDRESS + GPIOA_OFFSET_ADDRESS)
#define GPIOA ((GPIO_TYPEDEF*)GPIOA_BASE_ADDRESS)


#define GPIOB_OFFSET_ADDRESS 0x400U
#define GPIOB_BASE_ADDRESS (AHB1_BASE_ADDRESS + GPIOB_OFFSET_ADDRESS)
#define GPIOB ((GPIO_TYPEDEF*)GPIOB_BASE_ADDRESS)

#define GPIOC_OFFSET_ADDRESS 0x800U
#define GPIOC_BASE_ADDRESS (AHB1_BASE_ADDRESS + GPIOC_OFFSET_ADDRESS)
#define GPIOC ((GPIO_TYPEDEF*)GPIOC_BASE_ADDRESS)

#define GPIOD_OFFSET_ADDRESS 0xC00U
#define GPIOD_BASE_ADDRESS (AHB1_BASE_ADDRESS + GPIOD_OFFSET_ADDRESS)
#define GPIOD ((GPIO_TYPEDEF*)GPIOD_BASE_ADDRESS)

#define GPIOE_OFFSET_ADDRESS 0x1000U
#define GPIOE_BASE_ADDRESS (AHB1_BASE_ADDRESS + GPIOE_OFFSET_ADDRESS)
#define GPIOE ((GPIO_TYPEDEF*)GPIOE_BASE_ADDRESS)

#define GPIOF_OFFSET_ADDRESS 0x1400U
#define GPIOF_BASE_ADDRESS (AHB1_BASE_ADDRESS + GPIOF_OFFSET_ADDRESS)
#define GPIOF ((GPIO_TYPEDEF*)GPIOF_BASE_ADDRESS)

#define GPIOG_OFFSET_ADDRESS 0x1800U
#define GPIOG_BASE_ADDRESS (AHB1_BASE_ADDRESS + GPIOG_OFFSET_ADDRESS)
#define GPIOG ((GPIO_TYPEDEF*)GPIOG_BASE_ADDRESS)


#define GPIOH_OFFSET_ADDRESS 0x1C00U
#define GPIOH_BASE_ADDRESS (AHB1_BASE_ADDRESS + GPIOH_OFFSET_ADDRESS)
#define GPIOH ((GPIO_TYPEDEF*)GPIOH_BASE_ADDRESS)


#define P0 0
#define P1 1
#define P2 2
#define P3 3
#define P4 4
#define P5 5
#define P6 6
#define P7 7
#define P8 8
#define P9 9
#define P10 10
#define P11 11
#define P12 12
#define P13 13
#define P14 14
#define P15 15

#endif /* STM32F446_H_ */
