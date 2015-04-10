#include"sra.c"

int left=0,right=0,front=0,back=0;
void main()
{
int received_char;
bot_motion_init();
usart_init();
usart_transmit_string("YOU HAVE SUCCESSFULLY CONNECTED USB TO USART CP2102 ");
usart_transmit_newline();
usart_transmit_string("CONGRATS");
usart_transmit_newline();
while(1)
{

received_char=usart_receive_char();
usart_transmit_char(received_char);
usart_transmit_newline();


switch(received_char)
{
case 'a':bot_forward();
		delay_millisec(100);
		bot_stop();
		break;
case 'b':bot_backward();
		delay_millisec(100);
		bot_stop();
		break;
case 'c':bot_spot_right();
		delay_millisec(100);
		bot_stop();
		break;
case 'd':bot_spot_left();
		delay_millisec(100);
		bot_stop();
		break;
}

}
}