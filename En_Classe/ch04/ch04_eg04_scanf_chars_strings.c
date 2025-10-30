#include <stdio.h>
int main(void)
{
    char a,b;
    char first_name[80],last_name[80];

    scanf("%c %c", &a, &b);
    printf("a:%c et b:%c\n", a, b);

    scanf("%c", &a);
    scanf("%c", &b);
    printf("a:%c et b:%c\n", a, b);

    printf("Prenom: ");
    scanf("%s", &first_name);
    printf("Nom: ");
    scanf("%s", &last_name);
    printf("%s %s", first_name, last_name);



    return 0;
}