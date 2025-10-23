#include <stdio.h>
int main(void)
{
    int temperature;
    printf("Temperature en C : ");
    scanf("%i", &temperature);

    printf("Mmmm, c'est ");
    if(temperature < 0)
    {
        printf("glacial !\n");
    }
    else if ((temperature >= 0) && (temperature < 25))
    {
        if(temperature <= 20)
        {
            printf("frais ");
        }
        if(temperature >= 15) 
        {
            printf("agreable");
        }
        printf("\n");
    }
    else if ((temperature >= 25) && (temperature < 35))
    {
        printf("chaud.\n");
    }
    else if (temperature >= 35)
    {
        printf("caniculaire !\n");
    }
    
    return 0;
}