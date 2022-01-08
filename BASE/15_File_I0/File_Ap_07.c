#include<stdio.h>
void main()
{
    FILE *raw;
    raw = fopen("Ghi.txt","a+");
    fputc('1',raw);
    fclose(raw);


}