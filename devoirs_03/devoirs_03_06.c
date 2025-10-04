#include <stdio.h>
int main(void)
{
    // A)
    unsigned char x = 0xAA; // 1010 1010

    x |= 0xC0; // 1100 0000
    x &= 0xFC; // 1111 1100

    printf("A) %X\n", x); // expected: 1110 1000 | E8


    // B)
    x = 0b10011010;
    x = (x >> 3) & 0b00000111;
    printf("B) %X\n", x); // expected: 0000 0011 | 03

    // C)
    unsigned int y = 0x03020100; // 1010 1010

    unsigned int b0 = y & 0xFF000000;
    unsigned int b1 = y & 0x00FF0000;
    unsigned int b2 = y & 0x0000FF00;
    unsigned int b3 = y & 0x000000FF;

    printf("C)b0 %X\n", b0); // expected: 0x03000000
    printf("C)b1 %X\n", b1); // expected: 0x00020000
    printf("C)b2 %X\n", b2); // expected: 0x00000100
    printf("C)b3 %X\n", b3); // expected: 0x00000000

    return 0;
}