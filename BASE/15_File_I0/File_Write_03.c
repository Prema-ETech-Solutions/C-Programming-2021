#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr =fopen("Def.txt","w");
    fputc('H',ptr);
    fputs("\nello World",ptr);
    fclose(ptr);
}