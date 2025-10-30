#include <stdio.h>
int main(void)
{
    int temp_in_c;

    printf("Temperature en Celsius > ");
    scanf("%d", &temp_in_c);
    float f = (9.0/5.0)*temp_in_c+32.0;
    printf("Temperature en Fahrenheit: %d", (int)f);

    return 0;
}