#include "stm32f10x.h"                  // Device header
#define RCC_APB2ENR   (*(volatile unsigned int*)0x40021018)
#define GPIOC_CRL     (*(volatile unsigned int*)0x40011000)
#define GPIOC_ODR     (*(volatile unsigned int*)0x4001100C)

void delay(void);
void delay(void){

for( int i=0 ; i <500000; i++);
}


int main(void){

    RCC_APB2ENR |= (1 << 4);

    
    GPIOC_CRL &= ~(0xF << 24);  
    GPIOC_CRL |=  (0x1 << 24); 

    
    while(1) {
        
        GPIOC_ODR &= ~(1 << 6);
        delay();
				GPIOC_ODR |=( 1 << 6 );
				delay();
   
    }
	}
