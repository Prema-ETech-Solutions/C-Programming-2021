#include<stdio.h>
void main()
{
    /*
        Array is a collection of Data of same datatypes.


        Consider a scenario where you need to find out the average of 100 integer numbers entered by user. 
        In C, you have two ways to do this: 
        1) Define 100 variables with int data type and then perform 100 scanf() operations to store the entered values in the variables 
        and then at last calculate the average of them. 
        2) Have a single integer array to store all the values, 
        loop the array to store all the entered values in array and later calculate the average.
        
        Which solution is better according to you? 
        Obviously the second solution, 
        it is convenient to store same data types in one single variable and later access them using array index 
        (we will discuss that later in this tutorial). 
        How to declare Array in C ?

    */
   int marks[5];
    int ph [5];

   for (int i = 0; i <= 5; i++)
   {
    //    printf("%d",i);
       printf("ENTER THE Marks -\n");
       scanf("%d",&marks[i]);
       printf("ENTER THE Ph -\n");
       scanf("%d",&ph[i]);
   }
   for (int i = 0; i <= 5; i++)
   {
       printf("Marks for %d is %d\n",ph[i],marks[i]);
   }
   /*
        Various ways to initialize an array
        In the above example, we have just declared the array and later we initialized it with the values input by user. 
        However you can also initialize the array during declaration like this:
        int arr[5] = {1, 2, 3, 4 ,5};
        OR (both are same)
        int arr[] = {1, 2, 3, 4, 5};
        Un-initialized array always contain garbage values. 
        link-
        https://www.google.com/url?sa=i&url=https%3A%2F%2Fecomputernotes.com%2Fcpp%2Farray-pointer-union%2Fsingle-dimensional-arrays&psig=AOvVaw1_3JzLEd-ZdqJdyN52DNpH&ust=1640975875740000&source=images&cd=vfe&ved=0CAgQjRxqFwoTCLDsxtKVjPUCFQAAAAAdAAAAABAJ
   */    
}