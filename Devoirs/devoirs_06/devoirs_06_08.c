#include <stdio.h>
#include "devoirs_06_08.h"

int main(void)
{
    printf("%d\n", ch06_ex08_Invert(4321));
    printf("%d\n", ch06_ex08_Invert(-1));

    return 0;
}

int ch06_ex08_Invert(int number)
{
    if(number < 0)
    {
        return -1;
    }
    
    int inverse = 0;

    // Continue la boucle tant qu'il y a des chiffres à inverser
    while (number > 0) {
        // Multiplier le résultat par 10 pour shift à gauche les chiffres inversés
        // Prendre le chiffre le plus à droite du nombre avec modul0 10
        // Ajouter ce chiffre au résultat
        inverse = inverse * 10 + (number % 10);

        // Enlever le chiffre le plus à droite du nombre original
        number /= 10;
    }

    return inverse;
}