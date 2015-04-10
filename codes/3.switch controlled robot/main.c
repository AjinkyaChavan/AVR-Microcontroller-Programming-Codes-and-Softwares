#include"sra.c"

void main()
{
bot_motion_init();
switch_init();
while(1)
{
	
if(pressed_switch0())
{
bot_forward();
}		
else if(pressed_switch1())
{
bot_backward();
}
else if(pressed_switch2())
{
bot_right();
}
else if(pressed_switch3())
{
bot_left();
}
else
bot_brake();		

}
}
