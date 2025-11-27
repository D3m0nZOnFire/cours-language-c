#include <stdio.h>
#include <stdlib.h>
#include "ch09_eg01.h"

void showSizeofExamples(void)
{
    int a = 0;
    double b = 0.0;
    int tab[10];
    char message[] = "Hello";

    printf("size of int : %zu\n", sizeof(int));
    printf("size of double : %zu\n", sizeof(double));
    printf("size of char : %zu\n", sizeof(char));
    printf("size of float : %zu\n", sizeof(float));

    printf("size of a : %zu\n", sizeof(a));
    printf("size of b : %zu\n", sizeof(b));
    printf("size of tab : %zu\n", sizeof(tab));
    printf("size of message : %zu\n", sizeof(message));

    printf("size of 4.25 : %zu\n", sizeof(4.25)); // 8 car c'est un double
    printf("size of \"Bonjour\" : %zu\n", sizeof("Bonjour")); // 8 car il y a 7 charactères + "\0"

    int *ptr = malloc(10 * sizeof(int));

    if(ptr == NULL) {
        printf("Message d'erreur\n");
    } else {
        printf("size of ptr : %zu\n", sizeof(ptr)); // contient l'adresse du premier élément du tableau de int
    }

    free(ptr);
    ptr = NULL;
}