/*
 * main.c
 *
 *  Created on: May 4, 2023
 *      Author: Lenovo
 */
#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	DDRA= 0b00011111 ;
	while(1)
	{
		PORTA = 0b00000001 ;
	    for(int i =0 ; i<5 ; i++)
	    {

	    	_delay_ms(250 );
	    	PORTA <<= 1;
	    }
	}
}
