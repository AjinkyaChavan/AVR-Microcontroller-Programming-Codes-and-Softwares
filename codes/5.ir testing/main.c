 #include "sra.c"

char sbuffer[10], ch, toggle, last_toggle;
unsigned char pos;
unsigned int necdata;

void main()
{

port_init();
usart_init();
lcd_init(none);
lcd_clear();
pos = 0;
last_toggle = -1;
while(1)
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
				
				lcd_write_int_xy(0,0,necdata&0x00FF,3);
	   } // end while
}