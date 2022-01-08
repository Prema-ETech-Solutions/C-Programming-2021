#include <stdio.h>
void main()
{
    /*
        A while loop is the most straightforward looping structure. While loop syntax in C programming language is as follows:
        while (condition)
        {
         statements;
        }

        It is an entry-controlled loop. In while loop,
        a condition is evaluated before processing a body of the loop.
        If a condition is true then and only then the body of a loop is executed.
        After the body of a loop is executed then control again goes back at the beginning, and the condition is checked if it is true,
        the same process is executed until the condition becomes false. Once the condition becomes false, the control goes out of the loop.
        After exiting the loop,
        the control goes to the statements which are immediately after the loop.
        The body of a loop can contain more than one statement.
        If it contains only one statement, then the curly braces are not compulsory.
        It is a good practice though to use the curly braces even we have a single statement in the body.
        In while loop,
        if the condition is not true, then the body of a loop will not be executed, not even once.
        It is different in do while loop which we will see shortly.
        Following program illustrates while loop in C programming example:
    */

    int num = 1;      // initializing the variable
    while (num <= 10) // while loop with condition
    {
        printf("%d\n", num);
        num++; // incrementing operation
    }
    /*
        The above program illustrates the use of while loop. In the above program, 
        we have printed series of numbers from 1 to 10 using a while loop.


       A. We have initialized a variable called num with value 1. We are going to print from 1 to 10 hence the 
          variable is initialized with value 1. If you want to print from 0, 
          then assign the value 0 during initialization.
       B. In a while loop, we have provided a condition (num<=10), 
          which means the loop will execute the body until the value of num becomes 10. 
          After that, the loop will be terminated, and control will fall outside the loop.
       C. In the body of a loop, we have a print function to print our number and an increment operation to increment the value per execution 
          of a loop. An initial value of num is 1, after the execution, 
          it will become 2, and during the next execution, 
          it will become 3. This process will continue until the value becomes 10 and then it will print the series on console and 
          terminate the loop.
          
          \n is used for formatting purposes which means the value will be printed on a new line.
 
    */
}