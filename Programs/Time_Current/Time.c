#include <stdio.h>
#include <time.h>

int main()
{
    time_t t; // not a primitive datatype
    time(&t);
    printf("TODAYS DATE AND TIME :  %s", ctime(&t));
    return 0;
}
