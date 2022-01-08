#include <stdio.h>
void call_R(int *A, int *B);
void call_V(int A, int B);
void main()
{
    int X = 10, Y = 20;
    printf("\n\nBEFORE CALL BY VALUE OUTER VALUE\n\n");
    printf("VALUE OF X %d\n\n", X);
    printf("VALUE OF Y %d\n\n", Y);
    call_V(X, Y);
    printf("AFTER CALL BY VALUE OUTER VALUE\n\n");
    printf("VALUE OF X %d\n\n", X);
    printf("VALUE OF Y %d\n\n\n\n\n\n\n", Y);

    printf("BEFORE CALL BY REFERENCE OUTER VALUE\n\n");
    printf("VALUE OF X %d\n\n", X);
    printf("VALUE OF Y %d\n\n", Y);
    call_R(&X, &Y);
    printf("AFTER CALL BY REFERENCE OUTER VALUE\n\n");
    printf("VALUE OF X %d\n\n", X);
    printf("VALUE OF Y %d\n\n", Y);
}
void call_R(int *A, int *B)
{
    *A = 100;
    *B = 200;
}
void call_V(int A, int B)
{
    printf("Before Call By Value\n\n");
    printf("VALUE OF A %d\n\n", A);
    printf("VALUE OF B %d\n\n", B);
    A = 50;
    B = 30;
    printf("After Call By Valuen\n\n");
    printf("VALUE OF A %d\n\n", A);
    printf("VALUE OF B %d\n\n", B);
}