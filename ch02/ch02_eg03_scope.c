#include <stdio.h>

int z1 = 0;

void myFonctionToShowGlobalVarZ1(void)
{
    printf("Bloc d'une fonction, ici z1=%d\n", z1);
}

int main(void)
{
    int z2 = z1;
    int z1 = 1;

    {
        int z1 = 2;
        printf("in main in bracket: %i\n", z1);
    }
    printf("in main: z1>%i and z2>%i\n", z1, z2);

    myFonctionToShowGlobalVarZ1();
    return 0;
}
