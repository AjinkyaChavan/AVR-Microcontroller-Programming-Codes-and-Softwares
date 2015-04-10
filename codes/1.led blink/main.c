#include "sra.c"

# define F_CPU 16000000UL 

void blink_pattern1()
{
LED=0b0000000;
delay_millisec(100);
LED=0b10000000;
delay_millisec(100);
LED=0b11000000;
delay_millisec(100);
LED=0b11100000;
delay_millisec(100);
LED=0b11100000;
delay_millisec(100);
LED=0b11110000;
delay_millisec(100);
LED=0b11111000;
delay_millisec(100);
LED=0b11111100;
delay_millisec(100);
LED=0b11111110;
delay_millisec(100);
LED=0b11111111;
delay_millisec(100);
}

void main()
{

LED_DIR=0xFF;
LED=0x00;
while(1)
{
flick();
blink_pattern1();
}
}