#include <stdio.h>
void main()
{
    /*
        The continue statement is used inside loops.
        When a continue statement is encountered inside a loop, control jumps to the beginning of the loop for next iteration,
        skipping the execution of statements inside the body of loop for the current iteration.
    */
    for (int j = 0; j <= 8; j++)
    {
        if (j == 4)
        {
            /* The continue statement is encountered when
             * the value of j is equal to 4.
             */
            continue;
        }

        /* This print statement would not execute for the
         * loop iteration where j ==4  because in that case
         * this statement would be skipped.
         */
        printf("%d ", j);
    }


    /*
          Value 4 is missing in the output, why? When the value of variable j is 4, the program encountered a continue statement, 
          which makes the control to jump at the beginning of the for loop for next iteration, 
          skipping the statements for current iteration (that’s the reason printf didn’t execute when j is equal to 4).
    */
}