#include "sra.c"

void main()
{
port_init();
bot_motion_init();
lcd_init(underline);
lcd_clear();

while(1)
{
int x = (PINA&&0x0F);
lcd_write_int_xy(0,0,x,3);
delay_millisec(50);

if(x==4)
{
bot_forward();
}
else if(x==1)
{
bot_backward();
}
else if(x==6)
{
bot_right();
}
else if(x==2)
{
bot_left();
}
else if(x==10)
{
bot_stop();
}

}
}
