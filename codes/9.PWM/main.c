#include"sra.c"

void main()
{
bot_motion_init();
pwm1_init();
while(1)
{

for(int i=399;i>99;i=i-50)
{
bot_forward();
set_pwm1a(i);
set_pwm1b(i);
delay_sec(2);
}
}
}