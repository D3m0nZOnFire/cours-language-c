#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    const double WON2CHF = 0.00070;
    const double USD2CHF = 0.99;
    const double YEN2CHF = 0.0067;
    const double POUND2CHF = 1.13;

    double amount = 0;
    char currency;
    double swissFrancs = 0;
    bool validInput = false;

    while(!validInput)
    {
        printf("USAGE: positive value [W | $ | Y | P]\n");
        printf("Won = W\tDollar = $\tYen = Y\tPound = P\n");
        printf("Please enter the amount (in CHF) to convert: ");
        int result = scanf(" %lg %c", &amount, &currency); // To store in a double
        
        while (getchar() != '\n');

        if(result != 2)
        {
            printf("The input format is not correct!!\n");
            continue;
        }
        else if(amount < 0)
        {
            printf("The input amount is negative!!\n");
            continue;
        }    
        
        switch (currency)
        {
            case 'W':
                swissFrancs = amount * WON2CHF;
                validInput = true;
                break;
    
            case '$':
                swissFrancs = amount * USD2CHF;
                validInput = true;
                break;
                
            case 'Y':
                swissFrancs = amount * YEN2CHF;
                validInput = true;
                break;
                
            case 'P':
                swissFrancs = amount * POUND2CHF;
                validInput = true;
                break;
            
            default:
                printf("Unsupported currency!!\n");
                break;
        }

        if (validInput)
        {
            printf("Swiss francs: %.3f\n", swissFrancs);
        }
    }
    
    return 0;
}