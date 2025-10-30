#include <stdio.h>
#include <stdbool.h>
#include "devoirs_06_06.h"

int main(void)
{
    double numero1 = 0.0, numero2 = 0.0;
    char operateur = ' ';
    bool isExpressionNotValid = true;

    do
    {
        printf("Enter an expression <nb op nb> : ");
        int scanResult = scanf("%lf %c %lf", &numero1, &operateur, &numero2);

        if(scanResult != 3)
        {
            while(getchar() != '\n');
            continue;
        }

        if(operateur == '+' || 
            operateur == '-' || 
            operateur == '*' || 
            operateur == '/')
        {
            isExpressionNotValid = false;
        }
    } while (isExpressionNotValid);
    
    double result = ch06_ex06_Compute(numero1, numero2, operateur);

    printf("Result = %.4lf", result);

    return 0;
}

double ch06_ex06_Compute(double numero1, double numero2, char operateur)
{
    double result = 0;
    switch (operateur)
    {
        case '+':
            result = numero1+numero2;
            break;

        case '-':
            result = numero1-numero2;
            break;

        case '*':
            result = numero1*numero2;
            break;

        case '/':
            if(numero2 != 0.0)
            {
                result = numero1-numero2;
            }
            break;
        
        default:
            break;
    }

    return result;
}