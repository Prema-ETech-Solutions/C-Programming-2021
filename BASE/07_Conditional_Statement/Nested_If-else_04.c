#include <stdio.h>
void main()
{
    /* When a series of decision is required,
    nested if-else is used.
    Nesting means using one
    if-else construct within another one. */
    int num = 1;
    if (num < 10)
    {
        if (num == 1)
        {
            printf("The value is:%d\n", num);
        }
        else
        {
            printf("The value is greater than 1");
        }
    }
    else
    {
        printf("The value is greater than 10");
    }

    /*
     Firstly, we have declared a variable num with value as 
     1. Then we have used if-else construct.
     2. In the outer if-else, 
        the condition provided checks if a number is less than 10. 
        If the condition is true then and only then it will execute the inner loop. 
        In this case, the condition is true hence the inner block is processed.
     3. In the inner block, 
        we again have a condition that checks if our variable contains the value 1 or not. 
        When a condition is true, 
        then it will process the If block otherwise it will process an else block. 
        In this case, the condition is true hence the If a block is executed and the value is printed on the output screen.
     4. The above program will print the value of a variable and exit with success.
    */
   /*
   Summary
   1. Decision making or branching statements are used to select one path based on the result of the evaluated expression.
   2. It is also called as control statements because it controls the flow of execution of a program.
   3. ‘C’ provides if, if-else constructs for decision-making statements.
   4. We can also nest if-else within one another when multiple paths have to be tested.
   5. The else-if ladder is used when we have to check various ways based upon the result of the expression. 
   */
}