#include <stdio.h>
void main()
{
    int A = 10;
    printf("Value Of A = %d\n", A);

    /* To print the address of a variable we use %p
     * format specifier and ampersand (&) sign just
     * before the variable name like &num.
     */

    printf("Address Of A = %p", &A);

    // Pointer declaration
    int* p;

    printf("\nAddress of variable num is: %x", &p);
}