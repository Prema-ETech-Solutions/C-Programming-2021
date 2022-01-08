#include <stdio.h>
#include <string.h>
void main()
{
    char str[] = "AnnoyingUser";
    char str_01[] = "Annoying User";
    char str_00[] = "Annoying User";
    printf("\n\n");

    // strlen
    printf("strlen");
    printf("Length of string str: %d\n", strlen(str));
    printf("Length of string str_01: %d\n", strlen(str_01));

    printf("\n\n");

    // strnlen
    printf("strnlen");
    printf("Length of string str when maxlen is 30: %d\n", strnlen(str, 30));
    printf("Length of string str when maxlen is 10: %d\n", strnlen(str, 10));

    printf("\n\n");

    printf("Length of string str_01 when maxlen is 10: %d\n", strnlen(str_01, 30));
    printf("Length of string str_01 when maxlen is 30: %d\n", strnlen(str_01, 10));

    printf("\n\n");

    // strcmp
    printf("strcmp\n");

    printf("str\t cmp\t str_01\t value\t %d\n", strcmp(str, str_01));
    printf("str_00\t cmp\t str_01\t value\t %d\n", strcmp(str_00, str_01));

    printf("\n\n");

    // strncmp
    printf("strncmp\n");
    printf("str\t cmp\t str_01\t value\t %d\n", strncmp(str, str_01, 8));
    printf("str_00\t cmp\t str_01\t value\t %d\n", strncmp(str, str_01, 13));

    // strcat
    printf("strcat\n");
    printf("\n\n");
    char s1[] = "Annoying ";
    char s2[] = "User";
    strcat(s1, s2);
    printf("Output string after concatenation: %s", s1);

    printf("\n\n");

    // strncat
    printf("strncat\n");
    char s3[] = "Annoying ";
    char s4[] = "User";
    strncat(s3, s4, 3);
    printf("Output string after concatenation: %s", s3);

    printf("\n\n");

    // strcpy
    printf("strcpy\n");
    char S01[] = "DATA ";
    char S02[] = "LOG";
    /* this function has copied s2 into s1*/
    strcpy(S01, S02);
    printf("String S01 is: %s", S01);

    printf("\n\n");
    // strncpy
    printf("strcpy\n");
    char S03[] = "DATA ";
    char S04[] = "LOG";
    /* this function has copied s2 into s1*/
    strncpy(S04, S03, 2);
    printf("String S01 is: %s", S04);

    printf("\n\n");
    // strchr
    printf("strchr\n");
    char mystr[] = "I’m an example of function strchr";
    printf("%s", strchr(mystr, 'f'));

    // strstr
    printf("\n\n");
    char inputstr[] ="String Function in C at Annoying User";
    printf("Output string is: %s", strstr(inputstr, "Anno"));
}