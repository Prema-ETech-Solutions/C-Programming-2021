#include <stdio.h>
#include <dos.h>
void sleep();
void main()
{

    printf("Hello World\n");
    // to terminate the process for next 15 seconds.

    sleep(5);

    printf("Hello World");
}