#include <8052.h>

__sfr __at (0xB2) P3M0;
__sfr __at (0xB1) P3M1;

void delay(void)
{
    unsigned int i, j, k;
    for(i=0;i<8;i++)
        for(j=0;j<256;j++)
            for(k=0;k<256;k++);
}

void main(void)
{
    P3M0 = 0x00;   // quasi mode
    P3M1 = 0x00;

    while(1)
    {
        P3_3 = 0;
        delay();
        P3_3 = 1;
        delay();
    }
}
