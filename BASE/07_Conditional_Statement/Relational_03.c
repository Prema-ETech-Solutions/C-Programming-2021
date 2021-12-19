#include <stdio.h>
void main()
{

    /*
     C has six relational operators that can be used to formulate a Boolean expression for making a decision and testing conditions, which returns true or false :
     < less than
     <= less than or equal to
     > greater than
     >= greater than or equal to
     == equal to
     != not equal to
     Notice that the equal test (==) is different from the assignment operator (=) because it is one of the most common problems that a programmer faces by mixing them up.
   */
    int x = 41;
    x = x + 1;
    if (x == 42)
    {
        printf("You succeed!");
    }
}