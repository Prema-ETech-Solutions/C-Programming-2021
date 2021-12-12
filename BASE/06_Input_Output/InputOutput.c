#include <stdio.h>
void main()
{
  /*
    As we all know the three essential functions of a computer are reading,
    processing and writing data.
    Majority of the programs take data as input,
    and then after processing the processed data is being displayed which is called information.
    In C programming you can use scanf() and printf() predefined function to read and print data.

  */
  int Id, id_0, id_1;

  printf("Enter Id - \n");
  scanf("%d", &Id);

  printf("Value of id %d\n", Id);
  printf("Enter Id0 - \n");
  scanf("%d %d", &id_0, &id_1);

  printf("Value of id %d, %d\n", id_0, id_1);

  // The above program scanf() is used to take input from the user, and respectively printf() is used to display output result on the screen.
}
