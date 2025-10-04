#include <stdio.h>
int main(void)
{
    int memory = 0, word = 1, currency = 10, a = 26, b = 2, part = 28, nb_persons = 4;

    ++memory;
    word *= 8;
    --currency;
    a %= b;
    part /= nb_persons;

    int x = 10;
    int y, z;
    x *= y = z = 4;

    printf("memory: %d\n", memory);
    printf("word: %d\n", word);
    printf("currency: %d\n", currency);
    printf("a: %d\n", a);
    printf("part: %d\n", part);

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);

    return 0;
}