/*
    In this tutorial, we will learn functions in C programming.
    A function is a block of statements that performs a specific task.
    Let’s say you are writing a C program and you need to perform a same task in that program more than once.
    In such case you have two options:

    a) Use the same set of statements every time you want to perform the task
    b) Create a function to perform that task, and just call it every time you need to perform that task.

    Using option (b) is a good practice and a good programmer always uses functions while writing code in C.

    Why we need functions in C
    Functions are used because of following reasons –
    a) To improve the readability of code.
    b) Improves the reusability of the code, same function can be used in any program rather than writing the same code from scratch.
    c) Debugging of the code would be easier if you use functions, as errors are easy to be traced.
    d) Reduces the size of the code, duplicate set of statements are replaced by function calls.

 */
#include <stdio.h>

/*
Types of functions
1) Predefined standard library functions
Standard library functions are also known as built-in functions.
Functions such as puts(), gets(), printf(), scanf() etc are standard library functions.
These functions are already defined in header files (files with .h extensions are called header files such as stdio.h),
so we just call them whenever there is a need to use them.

For example, printf() function is defined in <stdio.h> header file so in order to use the printf() function,
we need to include the <stdio.h> header file in our program using #include <stdio.h>.
 */
void main()
{
    /*
    2) User Defined functions
    The functions that we create in a program are known as user defined functions or in other words you can say that a 
    function created by user is known as user defined function.

    Now we will learn how to create user defined functions and how to use them in C Programming

    Syntax of a function
    return_type function_name (argument list)
    {
        Set of statements – Block of code
    }
    return_type: Return type can be of any data type such as int, double, char, void, short etc. 
    Don’t worry you will understand these terms better once you go through the examples below.

    function_name: It can be anything, 
    however it is advised to have a meaningful name for the functions so that it would be easy to understand the purpose of function just by 
    seeing it’s name.

    argument list: Argument list contains variables names along with their data types. 
    These arguments are kind of inputs for the function. For example – A function which is used to add two integer variables, 
    will be having two integer argument.

    Block of code: Set of C statements, which will be executed whenever a call will be made to the function.

    Do you find above terms confusing? – Do not worry I’m not gonna end this guide until you learn all of them :)
    Lets take an example – Suppose you want to create a function to add two integer variables.

    Let’s split the problem so that it would be easy to understand –
    Function will add the two numbers so it should have some meaningful name like sum, 
    addition, etc. For example lets take the name addition for this function.

    return_type addition(argument list)
    This function addition adds two integer variables, which means I need two integer variable as input, 
    lets provide two integer parameters in the function signature. The function signature would be –

    return_type addition(int num1, int num2)
    The result of the sum of two integers would be integer only. 
    Hence function should return an integer value – I got my return type – It would be integer –

    int addition(int num1, int num2);
    So you got your function prototype or signature. Now you can implement the logic in C program like this:

    */
   
}