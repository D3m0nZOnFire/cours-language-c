#include <stdio.h>
int main(void)
{
    int nombre = 0, cpt = 0;
    do
    {
        printf("nombre entre 0 et 10 > ");
        scanf("%d", &nombre);
    } while (nombre < 0 || nombre > 10);
    printf("Merci, valeur correcte.\n");

    do
    {
        printf("%d ",cpt);
        cpt++;
    } while (cpt <= nombre);

    printf("\n");

    for (int i = 0; i <= nombre; i++)
    {
        if(i == 3)
        {
            continue;
        }
        else if (i == 8)
        {
            break;
        }
        else
        {
            printf("%d ",i);
        }
    }
    

    return 0;
}