/****************/
/* Author : Prasanna */
/* Date   : 28-09-2022 */
/* Filename:last to middle led blink */
/* Description :last to middle */
/****************/
#include<htc.h>
#include<stdio.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_ON & LVP_OFF);

void main()
{
	TRISB=0x00;//port b as output
	while(1)
	{	
		PORTB=0x80;
		__delay_ms(300);
		PORTB=0x00;
		__delay_ms(500);
		
		PORTB=0x40;
		__delay_ms(300);
		PORTB=0x00;
		__delay_ms(500);
		
		PORTB=0x20;
		__delay_ms(300);
		PORTB=0x00;
		__delay_ms(500);
		
		
		PORTB=0x10;
		__delay_ms(300);
		PORTB=0x00;
		__delay_ms(500);
		
		}
		
}		