/****************/
/* Author : Prasanna */
/* Date   : 28-09-2022 */
/* Filename:first to last led blink */
/* Description :first to last */
/****************/
#include<htc.h>
#include<stdio.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_ON & LVP_OFF);


void main()
{
	TRISB=0;//port b as output
	while(1)
	{
		PORTB=0xff;
		__delay_ms(500);
		
		PORTB=0x00;
		__delay_ms(100);
		
	}
}	
		