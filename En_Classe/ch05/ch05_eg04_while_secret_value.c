#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int chiffreATrouver = 0,chiffrePropose = 0, cpt = 0;
    const int MIN_VALUE = 0;
    const int MAX_VALUE = 9999;

    do
    {
        printf("Entrer une valeur entre %d et %d > ", MIN_VALUE, MAX_VALUE);
        scanf("%d", &chiffreATrouver);    
    } while (chiffreATrouver < MIN_VALUE || chiffreATrouver > MAX_VALUE);
    

    system("cls");

    do
    {
        printf("Essaye de trouver la valeur entre %d et %d > ", MIN_VALUE, MAX_VALUE);
        scanf("%i", &chiffrePropose);
        if(chiffrePropose < MIN_VALUE || chiffrePropose > MAX_VALUE)
        {
            printf("Donner un chiffre entre %d et %d\n", MIN_VALUE, MAX_VALUE);
        }
        else 
        {
            cpt++;
            if(chiffreATrouver != chiffrePropose)
            {
                printf("Votre chiffre est plus %s que le chiffre secret\n", chiffrePropose > chiffreATrouver? "grand": "petit");
            }
        }
    } while (chiffreATrouver != chiffrePropose && cpt < 20);
    
    if(chiffreATrouver == chiffrePropose) 
    {
        printf("Bravo!! Vous avez reussi avec %d essai(s)", cpt);
    }
    else
    {
        printf("Dommage. Tu n'as pas trouve apres %d essais", cpt);
    }
    

    return 0;
}