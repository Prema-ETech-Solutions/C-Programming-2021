#include <stdio.h>
void Sum(int v1 ,int v2);
int Sub(int v1 ,int v2);
void main()
{
    // Creating a user defined function with return and arguments
    int a =10,b=10,c;
    Sum(a,b);
    c=Sub(a,b);
    printf("\n\nSUB = %d",c);
}

void Sum(int v1 ,int v2)
{
    printf("Sum = %d",v1+v2);
}

int Sub(int v1 ,int v2)
{
    return v1-v2;
}
