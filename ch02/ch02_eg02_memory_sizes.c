#include <stdio.h>
#include <stdint.h>

int main(void)
{
    long long myInt32 = 0x01020304u;

    printf("size of char : %zu\n", sizeof(char));
    printf("size of short : %zu\n", sizeof(short));
    printf("size of int : %zu\n", sizeof(int));
    printf("size of long : %zu\n", sizeof(long));
    printf("size of long long : %zu\n", sizeof(long long));
    printf("size of float : %zu\n", sizeof(float));
    printf("size of double : %zu\n", sizeof(double));
    printf("size of long double : %zu\n", sizeof(long double));
    printf("size of void* : %zu\n", sizeof(void*));

    printf("Valeur long > %li", myInt32);

    return 0;
}