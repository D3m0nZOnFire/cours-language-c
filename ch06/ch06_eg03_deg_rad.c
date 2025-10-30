#include <stdio.h>
#include <math.h>
#include "ch06_eg03_deg_rad.h"

const double M_PI = 3.14159265358979323846;

int main(void)
{
    double degrees = 0;
    

    printf("Entrer une valeur > ");
    scanf("%lf", &degrees);

    double radians = to_radians(degrees);
    printf("radian: %lf\n", radians);
    printf("sinus: %lf\n", sin(radians));
    printf("cosinus: %lf\n", cos(radians));
    printf("tangente: %lf\n", degrees != 90 ? tan(radians) : 0);

    degrees = 0;
    printf("Deg\tRad\tSin\tCos\tTan\n");
    while (degrees <= 90)
    {
        double radians = to_radians(degrees);
        printf("%.0lf\t", degrees);
        printf("%.3lf\t", radians);
        printf("%.3lf\t", sin(radians));
        printf("%.3lf\t", cos(radians));
        printf("%.3lf\n", degrees != 90 ? tan(radians) : 0);

        degrees += 15;
    }
    
    


    return 0;
}

double to_radians(double deg)
{
    return (deg * M_PI) / 180.0;
}