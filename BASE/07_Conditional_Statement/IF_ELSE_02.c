#include<stdio.h>
int main()
{
    /*
        The if-else is statement is an extended version of If. The general form of if-else is as follows:
        if (test-expression)
        {
            True block of statements
        }
        Else
        {
            False block of statements
        }
        Statements;

        An this type of a construct, if the value of test-expression is true, 
        then the true block of statements will be executed. If the value of test-expression if false, 
        then the false block of statements will be executed. In any case, after the execution, 
        the control will be automatically transferred to the statements appearing outside the block of If.
        Following programs illustrate the use of the if-else construct:

        We will initialize a variable with some value and write a program to determine if the value is less than ten or greater than ten.
    */
   	int num=19;
	if(num<10)
	{
		printf("The value is less than 10");
	}
	else
	{
		printf("The value is greater than 10");
	}
	return 0;


    /* 
    We have initialized a variable with value 19. We have to find out whether the number is bigger or smaller than 10 using a ‘C’ program. 
    To do this, we have used the if-else construct.
    Here we have provided a condition num<10 because we have to compare our value with 10.
    As you can see the first block is always a true block which means, 
    if the value of test-expression is true then the first block which is If, will be executed.
    The second block is an else block. 
    This block contains the statements which will be executed if the value of the test-expression becomes false. 
    In our program, the value of num is greater than ten hence the test-condition becomes false and else block is executed. 
    Thus, our output will be from an else block which is “The value is greater than 10”. 
    After the if-else, the program will terminate with a successful result.
    In ‘C’ programming we can use multiple if-else constructs within each other which are referred to as nesting of if-else statements. 
    */
}