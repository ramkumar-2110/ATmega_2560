#include "gpio.h"
#include "seven_segment.h"
#include "keypad.h"
#include "lcd.h"

int main()
{
	port_config(PORT_K,0xff);
	port_config(PORT_B,0xff);
	lcd_config(PORT_K,PORT_B);
	lcd_init();
	//port_config(PORT_K,0xff);
	port_config(PORT_F,0xf0);
	//port_config(PORT_B,0xff);
	while (1)
	{
		//port_write(PORT_K,0x00);
		//port_write(PORT_B,0x01);
		volatile char a,o[100],ans[100]={0};
		volatile long long s[100]={0};
		long long o1=0,s1=0,n=0,f=0;
		int q=0;
			while(s1<100)
			{
				n=0;
				while(1){
				a=keypad_scan(PORT_F);
				//segment7_1(PORT_K,a);
				delay_ms(10);
				//port_write(PORT_K,0x00);
				if(a=='+'||a=='-'||a=='*'||a=='/'||a=='='||a=='~')
				{
					//segment_symbol(PORT_K,a);
					delay_ms(10);
					//port_write(PORT_K,0x00);
					break;
				   }
				   lcd_command((row_1+q));
				lcd_data((a+'0'));
					n*=10;
					n+=a;
					q++;
				}
				lcd_command((row_1+q));
				lcd_data(a);
				s[s1]=n;
				s1++;
				if(a=='+'||a=='-'||a=='*'||a=='/'){o[o1]=a;
					o1++;}
				if(a=='='||a=='~')
					{break;}

				q++;
			}
			if(a=='~'){lcd_command(clear_disp);
				continue;}
			while(o1>0)
			{
				f=0;
				for(int i=0;i<o1;i++)
				{
					if(o[i]=='/'||o[i]=='*')
					{
						if(o[i]=='/') s[i]=s[i]/s[i+1];
						else s[i]=s[i]*s[i+1];
						for(int j=i+1;j<s1-1;j++)
						{
							s[j]=s[j+1];
						}
						for(int j=i;j<o1-1;j++)
						{
							o[j]=o[j+1];
						}
						o1--;
						s1--;
						if(1){
							f=1;
						break;}
					}
				}
				if(f==1){
				continue;}
				for(int i=0;i<o1;i++)
				{
					if(o[i]=='+'||o[i]=='-')
					{
						if(o[i]=='+') s[i]=s[i]+s[i+1];
						else s[i]=s[i]-s[i+1];
						for(int j=i+1;j<s1-1;j++)
						{
							s[j]=s[j+1];
						}
						for(int j=i;j<o1-1;j++)
						{
							o[j]=o[j+1];
						}
						o1--;
						s1--;
						break;
					}
				}
			}
	//segment7_4(PORT_K,PORT_B,s[0]);
	if(s[0] == 0)
	{
    ans[0] = '0';
    ans[1] = '\0';
	}
	else
	{
    long long temp = s[0];
    int i = 0;

    while(temp > 0)
    {
        i++;
        temp /= 10;
    }
    i--;

    temp = s[0];
    ans[i+1] = '\0';

    while(temp > 0)
    {
        ans[i] = (temp % 10) + '0';
        temp /= 10;
        i--;
    }
	}
	lcd_command(row_2);
	lcd_string(ans);
	while(1)
	{
		a=keypad_scan(PORT_F);
		if(a=='~')
		{
		lcd_command(clear_disp);
		break;
		}
	}
	}
}