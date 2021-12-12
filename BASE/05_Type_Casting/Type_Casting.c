#include <stdio.h>
void main()
{
    // Without Type casting
    int a;
    a = 15 / 6;
    printf("%d", a);
    // In the above C program, 15/6 alone will produce integer value as 2.

    // With Type casting
    float b;
    b = (float) 15/6;
    printf("%f",b);
    // After type cast is done before division to retain float value 2.500000.
}