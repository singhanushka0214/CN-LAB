//Endianess of the system
#include<stdio.h>
int main()
{
    unsigned int x = 0x11223344;
    char *value = (char *) &x;
    if(*value == 0x11)
    {
        printf("Big Endian %02X\n", *value);
    }
    else
    {
        printf("Little Endian %02X\n", *value);
    }
}
