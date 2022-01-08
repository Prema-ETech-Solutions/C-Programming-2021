#include <stdio.h>
void main()
{
    FILE *raw;
    raw = fopen("Abc.txt","r");
    char str[5];
    fgets(str,6,raw);
    printf("STR DATA %s \n",str);
    fclose(raw);
}