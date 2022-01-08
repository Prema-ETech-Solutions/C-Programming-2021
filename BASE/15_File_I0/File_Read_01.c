#include <stdio.h>
void main()
{
    FILE *raw;
    raw = fopen("Abc.txt","r");
    char data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    data = fgetc(raw);
    printf("Data read from File %c \n",data);
    
    fclose(raw);
     

}