#include <stdio.h>
void main()
{
    /*
        A do…while loop in C is similar to the while loop except that the condition is always executed after the body of a loop.
        It is also called an exit-controlled loop.

        Syntax of do while loop in C programming language is as follows:

        do
        {
            statements
        } while (expression);

        As we saw in a while loop, the body is executed if and only if the condition is true.
        In some cases, we have to execute a body of the loop at least once even if the condition is false.
        This type of operation can be achieved by using a do-while loop.
        In the do-while loop, the body of a loop is always executed at least once. After the body is executed, then it checks the condition.
        If the condition is true, then it will again execute the body of a loop otherwise control is transferred out of the loop.
        Similar to the while loop, once the control goes out of the loop the statements which are immediately after the loop is executed.
        The critical difference between the while and do-while loop is that in while loop the while is written at the beginning.
        In do-while loop, the while condition is written at the end and terminates with a semi-colon (;)
        The following loop program in C illustrates the working of a do-while loop:

        Below is a do-while loop in C example to print a table of number 2:
    */

    int num = 1; // initializing the variable
    do           // do-while loop
    {
        printf("%d\n", 2 * num);
        num++; // incrementing operation
    } while (num <= 10);

    /*
        In the above example, we have printed multiplication table of 2 using a do-while loop. 
        Let’s see how the program was able to print the series. 


        First, we have initialized a variable ‘num’ with value 1. Then we have written a do-while loop.
        In a loop, we have a print function that will print the series by multiplying the value of num with 2.
        After each increment, the value of num will increase by 1, and it will be printed on the screen.
        Initially, the value of num is 1. In a body of a loop, the print function will be executed in this way: 2*num where num=1, 
        then 2*1=2 hence the value two will be printed. This will go on until the value of num becomes 10. 
        After that loop will be terminated and a statement which is immediately after the loop will be executed. In this case return 0.
    */
}