/****************/
/* Author : Prasanna */
/* Date   : 28-09-2022 */
/* Filename:first led blink */
/* Description : first led blink */
/****************/
#include<htc.h>
#include<stdio.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_ON & LVP_OFF);

void main ()
{
	TRISB=0;//port b as output
	while(1)
	{
		PORTB=0x0F;
		__delay_ms(900);
		PORTB=0xF0;
		__delay_ms(900);
		
	}	
}		