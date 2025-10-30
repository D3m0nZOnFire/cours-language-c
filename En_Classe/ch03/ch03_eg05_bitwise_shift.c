#include <stdio.h>
int main(void)
{
    unsigned char x = 0xAA;

    printf("x & 0x0F: %x\n", x & 0x0F);
    printf("x | 0x0F: %x\n", x | 0x0F);
    printf("x ^ 0x0F: %x\n", x ^ 0xFF);
    printf("~x: %x\n", ~x);
    printf("x << 2: %x\n", x << 2);
    printf("x >> 3: %x\n", x >> 3);

    return 0;
}