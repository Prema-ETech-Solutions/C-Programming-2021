#include <stdio.h>
void main()
{
    /*
     So far we have discussed the if statements and how it is used in C to control statement execution based on some decisions or conditions. 
     The flow of execution also depends on other statements which are not based on conditions that can control the flow. 

     C supports a unique form of a statement that is the goto Statement which is used to branch unconditionally within a program 
     from one point to another.
     Although it is not a good habit to use the goto statement in C, 
     there may be some situations where the use of the goto statement might be desirable.

     The goto statement is used by programmers to change the sequence of execution of a C program by shifting the control to 
     a different part of the same program.
     
     Syntax 
     goto label;

     A label is an identifier required for goto statement to a place where the branch is to be made. 
     A label is a valid variable name which is followed by a colon and is put immediately before the statement where the control needs to 
     be jumped/transferred unconditionally.
    */
   int a=101;
   start:
   printf("NUMBER %d\n",a);
   if (a>=100)
   {
    a--;
    goto start;
   }
   printf("NUMBER END %d \n",a);
   



}