#include "keypad.h"

char keypad_scan(port_index_t x)
{
    uint8_t a;

    while(1)
    {
        for(int i = 0; i < 4; i++)
        {
            uint8_t temp = port_read(x);
            temp &= 0x0F;
            temp |= (~(1 << (i+4)) & 0xF0);
            port_write(x, temp);

            delay_ms(2);

            a = port_read(x) & 0x0F;

            // If any key pressed
            if(a != 0x0F)
            {
                delay_ms(20);

                // Confirm press again
                a = port_read(x) & 0x0F;
                if(a == 0x0F) continue;

                char key = 0;

                // Decode key
                if(a == 0x07)
                {
                    if(i==0) key = '~';
                    if(i==1) key = 0;
                    if(i==2) key = '=';
                    if(i==3) key = '/';
                }
                else if(a == 0x0B)
                {
                    if(i<3) key = i + 7;
                    else key = '*';
                }
                else if(a == 0x0D)
                {
                    if(i<3) key = i + 4;
                    else key = '-';
                }
                else if(a == 0x0E)
                {
                    if(i<3) key = i +1;
                    else key = '+';
                }
                while(1)
                {
                    uint8_t check = port_read(x) & 0x0F;
                    if(check == 0x0F) break;
                }

                delay_ms(20);

                return key;
            }
        }
    }
}