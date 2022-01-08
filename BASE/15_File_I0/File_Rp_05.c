#include<stdio.h>
void main()
{
    FILE *raw;
    raw = fopen("Ghi.txt","r+");
    fputc('A',raw);
    fclose(raw);
}