#include <stdio.h>

int main(void)
{
    int day=0, month=0, year=0;
    const int daysPerMonths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int maxDays = 0;
    
    printf("Entrer une date > ");

    int status = scanf("%d/%d/%d", &day, &month, &year);
    maxDays = daysPerMonths[month-1];
    if( (month == 2) && (year % 4 == 0) )
    {
        maxDays++;   
    }

    if( ( (month < 1) || (month > 12) ) || ( (day < 1)  || (day > maxDays) ) )
    {
        printf("Date pas conforme");
        return 1;
    }
    
    printf("status: %d\n", status);
    printf("%02d/%02d/%04d\n", day, month, year);

    return 0;
}