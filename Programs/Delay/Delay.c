#include <stdio.h>

int main()
{
    long int i;
    int delay();
    for (i = 0; i <= 2; i++)
    {
        delay();
        printf(". ");
    }
}
int delay()
{
    long double a;

    for (a = 0; a < 100000000; a++)
    ;
}
