#include <stdio.h>
void main()
{
    /*
        String is an array of characters. In this guide, we learn how to declare strings,
        how to work with strings in C programming and how to use the pre-defined string handling functions.
        We will see how to compare two strings, concatenate strings,
        copy one string to another & perform various string manipulation operations.
        We can perform such operations using the pre-defined functions of “string.h” header file.
        In order to use these string functions you must include string.h file in your C program.
    */
    //    Method 1:
    char address[] = {'T', 'E', 'X', 'A', 'S', '\0'};
    // Method 2:
    // The above string can also be defined as –
    char address_1[] = "TEXAS";
    /*
        In the above declaration NULL character (\0)
        will automatically be inserted at the end of the string.
        What is NULL Char “\0”?
        '\0' represents the end of the string.
        It is also referred as String terminator & Null Character.
    */

    char nickname[20];

    printf("Enter your Nick name:");

    /* I am reading the input string and storing it in nickname
     * Array name alone works as a base address of array so
     * we can use nickname instead of &nickname here
     */
    scanf("%s", nickname);

    /*Displaying String*/
    printf("%s", nickname);
    // Note: %s format specifier is used for strings input/output

    // Read & Write Strings in C using gets() and puts() functions
    
    /* String Declaration*/
    char nickname_[20];

    /* Console display using puts */
    puts("Enter your Nick name:");

    /*Input using gets*/
    gets(nickname_);

    puts(nickname_);

    // Links-
    // https://beginnersbook.com/wp-content/uploads/2014/01/string-functions.png
}