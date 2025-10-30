#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void)
{
    int radius = 0;
    printf("Circle radius: ");
    scanf("%d", &radius);

    printf("pi = %.6f\n", M_PI);
    float surface = M_PI * pow(radius, 2);
    printf("Circle surface %.2f", surface);


    return 0;
}