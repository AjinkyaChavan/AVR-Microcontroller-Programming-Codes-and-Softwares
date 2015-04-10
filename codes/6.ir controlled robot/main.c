#include"sra.c"

char sbuffer[10], ch, toggle, last_toggle=-1;
unsigned char pos=0;
unsigned int necdata;


void remote()
{



ch = usart_receive_char(); //loop till character received
				if(ch==0x0A) // if received character is <LF> end of line, time to display
				{
					pos = 0; // buffer position reset for next reading
					
					// extract nec data from serial buffer to 16 bit value
					necdata = ((sbuffer[2]-'0')<<4)|(sbuffer[3]-'0'); // convert data from ASCII to low byte
					necdata |= (((sbuffer[0]-'0')<<12)|(sbuffer[1]-'0'))<<8; // convert data from ASCII to high byte					
										
										
				}
				else { //store serial data to buffer
					sbuffer[pos] = ch;
					pos++;
				}
				
}
void main()
{


usart_init();
bot_motion_init();

while(1)
{
remote();

if(necdata==18)
{
bot_forward();
delay_millisec(500);
}
else if(necdata==22)
{
bot_backward();
delay_millisec(500);
}
else if(necdata==19)
{
bot_spot_left();
delay_millisec(500);
}
else if(necdata==21)
{
bot_spot_right();
delay_millisec(500);
}


}
}