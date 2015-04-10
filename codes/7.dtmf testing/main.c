#include "sra.c"

void main()
{
port_init();
lcd_init(underline);
lcd_clear();

while(1)
{
int x = (PINA&&0x0F);
lcd_write_int_xy(0,0,x,3);
delay_millisec(50);
}

}
