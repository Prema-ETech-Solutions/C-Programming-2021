#include <stdio.h>
void main()
{
    /*
    Syntax of if statement:
    The statements inside the body of “if” only execute if the given condition returns true.
    If the condition returns false then the statements inside “if” are skipped.
    */
   int Num0=1,Num1=1;
   if (Num0==Num1)
   {
       printf("NUM0 IS EQUALS TO NUM1\n");
   }
   Num0++;
   if (Num0>Num1)
   {
       printf("NUM0 IS GREATER THAN TO NUM1\n");
   }
   Num1=10;
   if (Num0<Num1)
   {
       printf("NUM0 IS LESS THEN THAN TO NUM1\n");
   }
      
}