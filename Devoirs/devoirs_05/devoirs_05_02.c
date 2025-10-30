#include <stdio.h>
int main(void)
{
    char letter;
    printf("Type a letter: ");
    scanf("%c", &letter);

    if(letter >= 97 && letter <= 122) printf("lowercase\n");
    else if(letter >= 65 && letter <= 90) printf("UPPERCASE\n");
    else printf("The character you entererd is not a letter.\n");
    

    return 0;
}