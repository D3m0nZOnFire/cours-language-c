#include <stdio.h>
#include <math.h>

int main(void){
    
    int initAmount;
    double rate;
    int duration;

    printf("What is your initial asset? ");
    scanf("%d", &initAmount);

    printf("What is your yearly interest rate (in pourcent)?: ");
    scanf("%lf", &rate);

    printf("Duration in years? ");
    scanf("%d", &duration);

    double asset = (double)initAmount*pow((1+rate/100.0), (double)duration);
    printf("After 30 years, your assets (with interest) will be\t%.2f SFr", asset);

    return 0;
}