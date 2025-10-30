#include <stdio.h>
int main(void){
    
    int largeur;
    int hauteur;

    printf("largeur > ");
    scanf("%d", &largeur);

    printf("hauteur > ");
    scanf("%d", &hauteur);

    float aire = largeur * hauteur;

    printf("Aire: %f", aire);

    return 0;
}