#include <stdio.h>

int main(void)
{
    int variable1 = 10;
    int variable2 = 5;

    // Before swapping the variables content
    printf("Variable 1: %d \n", variable1); // Variable 1: 10
    printf("Variable 2: %d \n", variable2); // Variable 2: 5

    // Swap variables content

    //OPTION 1
    //int variable3 = variable1;
    //variable1 = variable2;
    //variable2 = variable3;

    //OPTION 2
    variable1 = variable1 + variable2;
    variable2 = variable1-variable2;
    variable1 = variable1-variable2;
    
    // After swapping the variables content
    printf("Variable 1: %d \n", variable1); // Variable 1: 5
    printf("Variable 2: %d \n", variable2); // Variable 2: 10
}