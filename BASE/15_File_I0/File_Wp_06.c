#include<stdio.h>
void main()
{
    FILE *raw;
    raw = fopen("Ghi.txt","w+");
    fputc('H',raw);
    fclose(raw);
}