#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n = 2;
    bool firstCompare = 3 <= 2-1;
    printf("firstCompare: %s\n", firstCompare ? "true": "false");

    bool secondCompare = 3 * (4 > 4) + 2.5;
    printf("secondCompare: %s\n", secondCompare ? "true": "false");
    
    bool thirdCompare = (4 == 5.1) / 2 + 1;
    printf("thirdCompare: %s\n", thirdCompare ? "true": "false");
    
    bool fourthCompare = true && false || true;
    printf("fourthCompare: %s\n", fourthCompare ? "true": "false");
    
    bool fifthCompare = 3 + (n > n - 1);
    printf("fifthCompare: %s\n", fifthCompare ? "true": "false");
    
    bool sixthCompare = !true && false || !false;
    printf("sixthCompare: %s\n", sixthCompare ? "true": "false");
    
    printf("Ex4 B)\n");
    for (int x = 0; x <= 10; x++)
    {
        bool b = x > 5 && x < 10 ? true : false;
        printf("\tx=%d b=%s\n", x, b ? "true": "false");
    }

    printf("Ex4 C)\n");
    for (int x = 0; x <= 10; x++)
    {
        bool b = x < 5 || x > 10 ? true : false;
        printf("\tx=%d b=%s\n", x, b ? "true": "false");
    }



    return 0;
}