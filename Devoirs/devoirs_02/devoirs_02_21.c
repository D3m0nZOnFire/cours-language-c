#include <stdio.h>
int main(void)
{
    int temp_in_c;

    printf("Temperature en Celsius > ");
    scanf("%d", &temp_in_c);
    float f = 32.0+1.8*temp_in_c;
    printf("Temperature en Fahrenheit: %.1f", f);

    return 0;
}