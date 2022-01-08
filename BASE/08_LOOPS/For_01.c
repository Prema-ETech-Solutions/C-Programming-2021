#include <stdio.h>
/*
    For loop in C
    A for loop is a more efficient loop structure in ‘C’ programming. The general structure of for loop syntax in C is as follows:
    Syntax of For Loop in C
    for (initial value; condition; incrementation or decrementation )
    {
        statements;
    }

    The initial value of the for loop is performed only once.
    The condition is a Boolean expression that tests and compares the counter to a fixed value after each iteration,
    stopping the for loop when false is returned.
    The incrementation/decrementation increases (or decreases) the counter by a set value.
 */
void main()
{

    for (int val = 0; val <= 10; val++)
    {
        printf("%d\n", val);
        /* code */
    }
}
/*
    The above program prints the number series from 1-10 using for loop.
    01.We have declared a variable of an int data type to store values.
    02.In for loop, in the initialization part,
       we have assigned value 1 to the variable number.
       In the condition part, we have specified our condition and then the increment part.
    03.In the body of a loop,
       we have a print function to print the numbers on a new line in the console.
       We have the value one stored in number,
       after the first iteration the value will be incremented,
       and it will become 2. Now the variable number has the value 2. The condition will be rechecked and since the condition is true loop will be executed,
       and it will print two on the screen. This loop will keep on executing until the value of the variable becomes 10. After that,
       the loop will be terminated,and a series of 1-10 will be printed on the screen.
*/