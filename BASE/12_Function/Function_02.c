#include <stdio.h>
void whoiam();
void main()
{
    // Creating a void user defined function that doesn’t return anything
    whoiam();
}
void whoiam()
{
    printf("Hello\n");
    printf("My name is Annoying\n");
    printf(".....");
    /* There is no return statement inside this function, since its
     * return type is void
     */
}

/*
    Few Points to Note regarding functions in C:
    1) main() in C program is also a function.
    2) Each C program must have at least one function, which is main().
    3) There is no limit on number of functions; A C program can have any number of functions.
    4) A function can call itself and it is known as “Recursion“. I have written a separate guide for it.

    C Functions Terminologies that you must remember
    return type: Data type of returned value. It can be void also, in such case function doesn’t return any value.

    Note: for example, if function return type is char, then function should return a value of char type and while calling this function the main() function should have a variable of char data type to store the returned value.
*/