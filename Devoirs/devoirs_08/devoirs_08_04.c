int main(void)
{
    // Adresses données :
    // c = 900
    // i1 = 1000
    // i2 = 1100
    // f1 = 1200
    // f2 = 1300

    // Tailles des types : char = 1 octet, int = 4 octets, float = 4 octets

    char *pc, c[10];
    int *pi1, *pi2, i1[10], i2 = 7;
    float *pf1, *pf2, f1[10], f2 = 3.14;

    // 1. pc = c; -> Valeur : 900
    // Le nom d'un tableau est converti en pointeur vers son premier élément.
    // On assigne l'adresse de c[0] à pc.
    pc = c;

    // 2. pi1 = i1; -> Valeur : 1000
    // Même principe : on assigne l'adresse de i1[0] à pi1.
    pi1 = i1;

    // 3. pi2 = &i2; -> Valeur : 1100
    // L'opérateur & donne l'adresse de i2.
    pi2 = &i2;

    // 4. pf1 = f1; -> Valeur : 1200
    // On assigne l'adresse de f1[0] à pf1.
    pf1 = f1;

    // 5. pf2 = &f2; -> Valeur : 1300
    // On assigne l'adresse de f2 à pf2.
    pf2 = &f2;

    // 6. pc += 6; -> Valeur : 906
    // Arithmétique de pointeurs : pc avance de 6 éléments de type char.
    // Calcul : 900 + (6 × 1) = 906
    pc += 6;

    // 7. pi1 += 6; -> Valeur : 1024
    // pi1 avance de 6 éléments de type int.
    // Calcul : 1000 + (6 × 4) = 1024
    pi1 += 6;

    // 8. pf1 += 6; -> Valeur : 1224
    // pf1 avance de 6 éléments de type float.
    // Calcul : 1200 + (6 × 4) = 1224
    pf1 += 6;

    // 9. *pf2 += 5; -> Valeur : 8.14
    // On modifie la valeur pointée par pf2 (c'est-à-dire f2).
    // Le * déréférence le pointeur, donc on modifie la valeur, pas l'adresse.
    // Calcul : 3.14 + 5 = 8.14
    *pf2 += 5;

    // 10. *pi2 -= 2; -> Valeur : 5
    // On modifie la valeur pointée par pi2 (c'est-à-dire i2).
    // Calcul : 7 - 2 = 5
    *pi2 -= 2;

    // 11. pi1 -= *pi2; -> Valeur : 1004
    // On soustrait la valeur pointée par pi2 (qui est maintenant 5) à l'adresse pi1.
    // Arithmétique de pointeurs : la valeur est multipliée par sizeof(int).
    // Calcul : 1024 - (5 × 4) = 1024 - 20 = 1004
    pi1 -= *pi2;

    return 0;
}
