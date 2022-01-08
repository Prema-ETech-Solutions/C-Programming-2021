#include <stdio.h>
void main()
{
    FILE *raw ;
    raw = fopen("Def.txt","a");
    fputc('A',raw);
    fputs("Raw",raw);
    fclose(raw);
}