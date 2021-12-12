#include <stdio.h>
#define PI_ 3.14
void main()
{
  /*
   ‘C’ provides various data types to make it easy for a programmer to select a suitable data type as per the requirements of an application.
   Following are the three data types:

   Primitive data types
   Derived data types
   User-defined data types
   There are five primary fundamental data types,
   int for integer data
   char for character data
   float for floating point numbers
   double for double precision floating point numbers
   void

   Array,Functions, pointers, structures are derived data types.
   ‘C’ language provides more extended versions of the above mentioned primary data types.

   Integer data type
   Integer is nothing but a whole number.
   The range for an integer data type varies from machine to machine.
   The standard range for an integer data type is -32768 to 32767.
   An integer typically is of 2 bytes which means it consumes a total of 16 bits in memory.
   A single integer value takes 2 bytes of memory.
   An integer data type is further divided into other data types such as short int, int, and long int.
   Each data type differs in range even though it belongs to the integer data type family.
   The size may not change for each data type of integer family.
   The short int is mostly used for storing small numbers,
   int is used for storing averagely sized integer values,
   and long int is used for storing large integer values.

   Whenever we want to use an integer data type, we have place int before the identifier such as,

  */
  int age;
  /*
   Here, age is a variable of an integer data type which can be used to store integer values.
   Floating point data type
   Like integers, in ‘C’ program we can also make use of floating point data types.
   The ‘float’ keyword is used to represent the floating point data type.
   It can hold a floating point value which means a number is having a fraction and a decimal part.
   A floating point value is a real number that contains a decimal point.
   Integer data type doesn’t store the decimal part hence we can use floats to store decimal part of a value.
   Generally, a float can hold up to 6 precision values.
   If the float is not sufficient, then we can make use of other data types that can hold large floating point values.
   The data type double and long double are used to store real numbers with precision up to 14 and 80 bits respectively.
   While using a floating point number a keyword float/double/long double must be placed before an identifier. The valid examples are,
   */

  float division;
  double BankBalance;
  /*
   Character data type
   Character data types are used to store a single character value enclosed in single quotes.
   A character data type takes up-to 1 byte of memory space.
   Example,
  */
  char letter_;
  /*
   Void data type
   A void data type doesn’t contain or return any value. It is mostly used for defining functions in ‘C’.
   Example,
   void displayData()
   */

  /*
   What is a Variable?
   A single variable can be used at multiple locations in a program.
   A variable name must be meaningful. It should represent the purpose of the variable.

   Example: Height, age, are the meaningful variables that represent the purpose it is being used for.
   Height variable can be used to store a height value. Age variable can be used to store the age of a person
   A variable must be declared first before it is used somewhere inside the program.
   A variable name is formed using characters, digits and an underscore.

   Following are the rules that must be followed while creating a variable:
   A variable name should consist of only characters, digits and an underscore.
   A variable name should not begin with a number.
   A variable name should not consist of whitespace.
   A variable name should not consist of a keyword.
   ‘C’ is a case sensitive language that means a variable named ‘age’ and ‘AGE’ are different.

   Following are the examples of valid variable names in a ‘C’ program:
   height or HEIGHT
   _height
   _height1
   My_name

   Following are the examples of invalid variable names in a ‘C’ program:
   1height
   Hei$ght
   My name

   For example, we declare an integer variable my_variable and assign it the value 48:
   int my_variable;
   my_variable = 48;
   By the way, we can both declare and initialize (assign an initial value) a variable in a single statement:
   int my_variable = 48;
   */

  int x, y;
  float salary = 13.48;
  char letter = 'K';
  x = 25;
  y = 34;
  int z = x + y;
  printf("%d \n", z);
  printf("%f \n", salary);
  printf("%c \n", letter);
  /*
   We can declare multiple variables with the same data type on a single line by separating them with a comma.
   Also, notice the use of format specifiers in printf output function float (%f) and char (%c) and int (%d).
  */

  //  Constants
  // By using the const keyword in a variable declaration which will reserve a storage memory
  const double PI = 3.14;
  printf("%f\n", PI);
  // PI++; // This will generate an error as constants cannot be changed
  printf("%f\n", PI);
  // By using the #define pre-processor directive which doesn’t use memory for storage and without putting
  // A semicolon character at the end of that statement
  printf("%f\n", PI_);


  /* Summary
  A constant is a value that doesn’t change throughout the execution of a program.
  A variable is an identifier which is used to store a value.
  There are four commonly used data types such as int, float, char and a void.
  Each data type differs in size and range from one another. 
  */

}