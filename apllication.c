/*
 * apllication.c
 *
 *  Created on: Oct 14, 2022
 *      Author: fatima
 */
#include"ultrasonic_sensor.h"
#include"lcd.h"
#include<avr/interrupt.h>

int main()
{
	sei(); //ENABLE I-BIT
	uint16 distance=0;
	Ultrasonic_init();
	LCD_init();
	LCD_displayString("Distance=    cm");

    while(1)
    {
    	LCD_moveCursor(0,10);
    	distance= Ultrasonic_readDistance();
    	LCD_intgerToString(distance);
    	if(distance<100){
    		LCD_displayCharacter(' ');
    	}
   }

}

