#include <stdio.h>
void main()
{
    /*
        An array of arrays is known as 2D array. The two dimensional (2D) array in C programming is also known as matrix.
        A matrix can be represented as a table of rows and columns.
        Before we discuss more about two Dimensional array lets have a look at the following C program.

        Simple Two dimensional(2D) Array Example
        For now don’t worry how to initialize a two dimensional array, we will discuss that part later.
        This program demonstrates how to store the elements entered by user in a 2d array and
        how to display the elements of a two dimensional array.
    */
    /* 2D array declaration*/
    int disp[2][3];
    /*Counter variables for the loop*/
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value for disp[%d][%d]:", i, j);
            scanf("%d", &disp[i][j]);
        }
    }
    // Displaying array elements
    printf("Two Dimensional array elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", disp[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }

    /*
        There are two ways to initialize a two Dimensional arrays during declaration.
        int disp[2][4] = {
            {10, 11, 12, 13},
            {14, 15, 16, 17}
            };
            OR
            int disp[2][4] = { 10, 11, 12, 13, 14, 15, 16, 17};
        Although both the above declarations are valid, 
        I recommend you to use the first method as it is more readable, 
        because you can visualize the rows and columns of 2d array in this method. 
    */
}