#include <stdio.h>
int main(void)
{
    int chiffre;
    const char* myTab[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};

    printf("Entrez un chiffre de 1 a 7 > ");
    scanf("%i", &chiffre);

    printf("a) ");
    switch (chiffre)
    {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        case 4:
            printf("Jeudi\n");
            break;
        case 5:
            printf("Vendredi\n");
            break;
        case 6:
            printf("Samedi\n");
            break;
        case 7:
            printf("Dimanche\n");
            break;
        default:
            printf("Numéro invalide\n");
            break;
    }
    
    if(chiffre > 1 && chiffre < 7)
    {
        printf("b) %s", myTab[chiffre-1]);
    }

    return 0;
}