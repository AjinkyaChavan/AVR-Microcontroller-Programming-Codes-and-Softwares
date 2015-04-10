#include "sra.c"

void main()
{
lcd_init(underline);
lcd_clear();
lcd_write_string("LOADING:");

lcd_write_int_xy(9,0,54,3);
lcd_write_string_xy(12,0,"%");
delay_millisec(50);


for(int i=0;i<=100;i++)
{
lcd_write_int_xy(9,0,i,3);
lcd_write_string_xy(12,0,"%");
delay_millisec(50);
}
delay_millisec(500);
lcd_clear();
lcd_write_string_xy(5,0,"WELCOME");
lcd_write_string_xy(5,1,"TO");
lcd_write_string_xy(9,1,"SRA");
delay_sec(1);
lcd_clear();							//all four team members
lcd_write_string_xy(0,0,"Ajinkya");		//write your names here
lcd_write_string_xy(9,0,"Sheshans");		
lcd_write_string_xy(0,1,"Nitin");
lcd_write_string_xy(9,1,"Buffalo");
delay_sec(1);
lcd_clear();
lcd_write_string_xy(0,0,"CONGRATS");
lcd_write_string_xy(0,1,"LCD SUCCESSFUL..");
}
