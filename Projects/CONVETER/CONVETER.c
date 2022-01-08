/*
   THE CONVETER IS IN BETA STAGE
 */
#include <stdio.h>
#include <stdlib.h>
int getch();
void exit1();
int delay();
int main()
{
    // int temp,length,time,currency;//ALL TYPES
    int user1;
    int converter, converter1;
    float user2, equ_;
// char  next='>',previous='<';
back0:
    system("cls");
    printf("\t\t\t\t_____CONVERTER_____\n");
    printf(" ENTER\n 01 FOR TEMPERATURE \n 02 FOR LENGTH \n 03 FOR TIME \n 04 FOR AREA \n 05 FOR ENERGY \n 99 FOR EXIT \n");
    printf(" ENTER THE NUMBER :- \a");
    scanf("%d", &user1);
    system("cls");
    switch (user1) // MAIN IN ALL TYPE
    {
    case 01: // temp
    {
    back1:
        printf("\t\t\t\t_____CONVERT_____\n");
        printf(" ENTER \n 01 FOR CELSIUS\n 02 FOR FAHRENHEIT\n 03 FOR KELVIN\n 99 FOR GO BACK\n");
        printf(" ENTER THE NUMBER :- ");
        scanf("%d", &converter);
        system("cls");
        switch (converter) // TEMP TO ALL SUB TYPES
        {
        case 01: // CELSIUS TO FAHRENHEIT AND KELVIN
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR FAHRENHEIT\n 02 FOR KELVIN\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 01 && converter1 == 01)
            {
                printf("ENTER THE TEMPERATURE IN CELSIUS :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CELSIUS", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CELSIUS AND IT IS CONVERTED INTO FAHRENHEIT %f", user2, (user2 * 9 / 5) + 32);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 02)
            {
                printf("ENTER THE TEMPERATURE IN CELSIUS :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CELSIUS", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CELSIUS AND IT IS CONVERTED INTO KELVIN %f", user2, user2 + 273.15);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 99)
            {
                goto back1;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT\n\t\t\t\t TRY AGAIN");
                getch();
                system("cls");
                goto back1;
            }
        }
        break;
        case 02: // FAHRENHEIT TO CELSIUS AND KELVIN
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR CELSIUS\n 02 FOR KELVIN\n 99 FOR GO BACK \n");
            printf("ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 02 && converter1 == 01)
            {
                printf("ENTER THE TEMPERATURE IN FAHRENHEIT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FAHRENHEIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FAHRENHEIT AND IT IS CONVERTED INTO CELSIUS %f", user2, (user2 - 32) * 5 / 9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 02)
            {
                printf("ENTER THE TEMPERATURE IN FAHRENHEIT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FAHRENHEIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FAHRENHEIT AND IT IS CONVERTED INTO KELVIN %f", user2, (user2 - 32) * 5 / 9 + 273.15);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 99)
            {
                goto back1;
            }
            else
            {

                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN");
                getch();
                system("cls");
                goto back1;
            }
        }
        break;
        case 03: // KELVIN TO CELSIUS AND FAHRENHEIT
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR CELSIUS\n 02 FOR FAHRENHEIT\n 99 FOR GO BACK \n");
            printf("ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 03 && converter1 == 01)
            {
                printf("ENTER THE TEMPERATURE IN KELVIN :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KELVIN", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KELVIN AND IT IS CONVERTED INTO CELSIUS \n%f", user2, user2 - 273.15);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 02)
            {
                printf("ENTER THE TEMPERATURE IN KELVIN :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KELVIN", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KELVIN AND IT IS CONVERTED INTO FAHRENHEIT \n%f", user2, (user2 - 273.15) * 9 / 5 + 32);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 99)
            {
                goto back1;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN");
                getch();
                system("cls");
                goto back1;
            }
        }
        break;
        case 99:
        {
            goto back0;
        }
        break;
        default:
        {
            printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN");
            getch();
            system("cls");
            goto back0;
        }
        }
    }
    break;
    case 02: // length
    {
    back2:
        printf("\t\t\t\t_____CONVERT_____\n");
        printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METRE\n 03 FOR CENTIMETRE\n 04 FOR MILLIMETRE\n 05 FOR MICROMETRE\n 06 FOR NANOMETER\n 07 FOR MILE\n 08 FOR YARD\n 09 FOR FOOT\n 10 FOR INCH\n 11 FOR NAUTICAL MILE\n 99 FOR GO BACK\n");
        printf(" ENTER THE NUMBER :- ");
        scanf("%d", &converter);
        system("cls");
        switch (converter) // length TO ALL SUB TYPES
        {
        case 01: // KILOMETRE TO ALL LENGTH  TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR METRE\n 02 FOR CENTIMETRE\n 03 FOR MILLIMETRE\n 04 FOR MICROMETRE\n 05 FOR NANOMETER\n 06 FOR MILE\n 07 FOR YARD\n 08 FOR FOOT\n 09 FOR INCH\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 01 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN KILOMETER :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO METRE\n %f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN KILOMETER :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO CENTIMETRE\n %f", user2, user2 * 100000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN KILOMETER :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO MILLIMETRE\n %f", user2, user2 * 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN KILOMETER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO MICROMETRE \n%f", user2, user2 * 1e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN KILOMETER :- ");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO NANOMETRE\n %f", user2, user2 * 1e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN KILOMETER :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO MILE \n%f", user2, user2 / 1.609);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN KILOMETER :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO YARD \n%f", user2, user2 * 1093.613);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN KILOMETER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO FOOT \n%f", user2, user2 * 3280.84);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN KILOMETER :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO INCH \n%f", user2, user2 * 39370.079);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN KILOMETER :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOMETER AND IT IS CONVERTED INTO NAUTICAL MILE\n%f", user2, user2 / 1.852);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 99)
            {
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 02: // METER TO ALL LENGTH TYPE
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR CENTIMETRE\n 03 FOR MILLIMETRE\n 04 FOR MICROMETRE\n 05 FOR NANOMETER\n 06 FOR MILE\n 07 FOR YARD\n 08 FOR FOOT\n 09 FOR INCH\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 02 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN METER :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN METER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO KILOMETRE \n%f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN METER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN METER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO CENTIMETER \n%f", user2, user2 * 100);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN METER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN METER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO MILLIMETER \n%f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN METER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN METER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO MICROMETER \n%f", user2, user2 * 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN METER :- ");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN METER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO NANOMETER \n%f", user2, user2 * 1e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN METER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN METER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO MILE \n%f", user2, user2 / 1607.344);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN METER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO YARD \n%f", user2, user2 * 1.094);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN METER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO FOOT \n%f\a", user2, user2 * 3.281);
                printf("\n\t\t\t\tTHANK YOU\a");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN METER :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO INCH \n%f\a", user2, user2 * 39.37);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN METER :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETER\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO NAUTICAL \n%f\a", user2, user2 / 1852);
                printf("\n\t\t\t\tTHANK YOU\a");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 99)
            {
                printf("\a");
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a\a");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 03: // CENTIMETRE TO ALL TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METER\n 03 FOR MILLIMETRE\n 04 FOR MICROMETRE\n 05 FOR NANOMETER\n 06 FOR MILE\n 07 FOR YARD\n 08 FOR FOOT\n 09 FOR INCH\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK\a");
            printf("\n ENTER THE NUMBER :- \a");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 03 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO KILOMETRE \n%f\a", user2, user2 / 100000);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO METRE \n%f\a", user2, user2 / 100);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO MILLIMETRE\n %f\a", user2, user2 * 10);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO MICROMETRE \n%f\a", user2, user2 * 10000);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO NANOMETRE \n%f\a", user2, user2 * 1e+7);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO MILE \n%f\a", user2, user2 / 160934.4);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO YARD \n%f\a", user2, user2 / 91.44);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO FOOT \n%f\a", user2, user2 / 30.48);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO INCH \n%f\a", user2, user2 / 2.54);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN CENTIMETRE :-\a");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTIMETRE\a", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN METER AND IT IS CONVERTED INTO NAUTICAL MILE \n%f\a", user2, user2 / 185200);
                printf("\n\t\t\t\tTHANK YOU\a\a");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 99)
            {
                printf("\a");
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a\a");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 04: // MILLIMETRE TO ALL LENTH TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METER\n 03 FOR CENTIMETRE\n 04 FOR MICROMETRE\n 05 FOR NANOMETER\n 06 FOR MILE\n 07 FOR YARD\n 08 FOR FOOT\n 09 FOR INCH\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK\a");
            printf("\n ENTER THE NUMBER :- \a");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 04 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLIMETRE AND IT IS CONVERTED INTO KILOMETRE \n%f", user2, user2 / 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLIMETRE AND IT IS CONVERTED INTO METRE \n%f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %fIN MILLIMETRE AND IT IS CONVERTED INTO CENTIMETRE \n%f", user2, user2 / 10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLIMETRE AND IT IS CONVERTED INTO MICROMETRE \n%f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLIMETRE AND IT IS CONVERTED INTO NANOMETRE \n%f", user2, user2 * 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLIMETRE AND IT IS CONVERTED INTO MILE \n%f", user2, user2 / 1.609e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLIMETRE AND IT IS CONVERTED INTO YARD \n%f", user2, user2 / 914.4);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLIMETRE AND IT IS CONVERTED INTO FOOT\n %f", user2, user2 / 304.8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLIMETRE AND IT IS CONVERTED INTO INCH \n%f", user2, user2 / 25.4);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN MILLIMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLIMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLIMETRE AND IT IS CONVERTED INTO NAUTICAL MILE \n%f", user2, user2 / 1.852e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 99)
            {
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 05: // MICROMETRE TO ALL LENGTH TYPE
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METER\n 03 FOR CENTIMETRE\n 04 FOR MILLIMETRE\n 05 FOR NANOMETER\n 06 FOR MILE\n 07 FOR YARD\n 08 FOR FOOT\n 09 FOR INCH\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 05 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO KILOMETRE \n%f", user2, user2 / 1e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO METER \n%f", user2, user2 / 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO CENTIMETRE \n%f", user2, user2 / 10000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO MILLIMETRE \n%f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO NANOMETRE \n%f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO MILE \n%f", user2, user2 / 1.609e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO YARD \n%f", user2, user2 / 914400);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO FOOT \n%f", user2, user2 / 304800);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO INCH \n%f", user2, user2 / 25400);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN MICROMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROMETRE AND IT IS CONVERTED INTO NAUTICAL MILE \n%f", user2, user2 / 1.852e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 99)
            {
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 06: // NANOMETRE TO ALL LENGTH TYPE
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METER\n 03 FOR CENTIMETRE\n 04 FOR MILLIMETRE\n 05 FOR MICROMETER\n 06 FOR MILE\n 07 FOR YARD\n 08 FOR FOOT\n 09 FOR INCH\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 06 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO KILOMETRE \n%f", user2, user2 / 1e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO METER \n%f", user2, user2 / 1e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO CENTIMETRE \n%f", user2, user2 / 1e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO MILLIMETRE \n%f", user2, user2 / 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO MICROMETER \n%f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO MILE \n%f", user2, user2 / 1.609e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO YARD \n%f", user2, user2 / 9.144e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO FOOT \n%f", user2, user2 / 3.048e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO INCH \n%f", user2, user2 / 2.54e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN NANOMETRE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOMETRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOMETRE AND IT IS CONVERTED INTO NAUTICAL MILE \n%f", user2, user2 / 1.852e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 99)
            {
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 07: // MILE TO ALL LENGTH TYPE
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METER\n 03 FOR CENTIMETRE\n 04 FOR MILLIMETRE\n 05 FOR MICROMETER\n 06 FOR NANOMETRE\n 07 FOR YARD\n 08 FOR FOOT\n 09 FOR INCH\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK ");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 07 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO KILOMETRE \n%f", user2, user2 * 1.609);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO METER \n%f", user2, user2 * 1609.344);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO CENTIMETRE \n%f", user2, user2 * 160934.4);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO MILLIMETRE \n%f", user2, user2 * 1.609e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO MICROMETER \n%f", user2, user2 * 1.609e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO NANOMETRE \n%f", user2, user2 * 1.609e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO YARD \n%f", user2, user2 * 1760);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO FOOT \n%f", user2, user2 * 5280);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO INCH \n%f", user2, user2 * 63360);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILE AND IT IS CONVERTED INTO NAUTICAL MILE \n%f", user2, user2 / 1.151);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 99)
            {
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 8: // YARD TO ALL LENGTH TYPE
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METER\n 03 FOR CENTIMETRE\n 04 FOR MILLIMETRE\n 05 FOR MICROMETER\n 06 FOR NANOMETRE\n 07 FOR MILE\n 08 FOR FOOT\n 09 FOR INCH\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 8 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO KILOMETRE \n%f", user2, user2 / 1093.613);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO METER \n%f", user2, user2 / 1.094);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO CENTIMETRE \n%f", user2, user2 * 91.44);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO MILLIMETRE \n%f", user2, user2 * 914.4);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO MICROMETER \n%f", user2, user2 * 914400);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO NANOMETRE \n%f", user2, user2 * 9.144e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO MILE \n%f", user2, user2 / 1760);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO FOOT \n%f", user2, user2 * 3);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO INCH \n%f", user2, user2 * 36);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN YARD :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YARD AND IT IS CONVERTED INTO NAUTICAL MILE \n%f", user2, user2 / 2025.372);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 99)
            {
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 9: // FOOT TO ALL LENGTH TYPE
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METER\n 03 FOR CENTIMETRE\n 04 FOR MILLIMETRE\n 05 FOR MICROMETER\n 06 FOR NANOMETRE\n 07 FOR MILE\n 08 FOR YARD\n 09 FOR INCH\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 8 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO KILOMETRE \n%f", user2, user2 / 3280.84);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO METER \n%f", user2, user2 / 3.281);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO CENTIMETRE \n%f", user2, user2 * 30.48);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO MILLIMETRE \n%f", user2, user2 * 304.8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO MICROMETER \n%f", user2, user2 * 304800);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO NANOMETRE \n%f", user2, user2 * 3.048e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO MILE \n%f", user2, user2 / 5280);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO YARD \n%f", user2, user2 / 3);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO INCH \n%f", user2, user2 * 12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN FOOT :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT AND IT IS CONVERTED INTO NAUTICAL MILE \n%f", user2, user2 / 6076.115);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 99)
            {
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN ");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 10: // INCH TO ALL LENGTH TYPE
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METER\n 03 FOR CENTIMETRE\n 04 FOR MILLIMETRE\n 05 FOR MICROMETER\n 06 FOR NANOMETRE\n 07 FOR MILE\n 08 FOR YARD\n 09 FOR FOOT\n 10 FOR NAUTICAL MILE\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 10 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO KILOMETRE \n%f", user2, user2 / 39370.079);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO METER \n%f", user2, user2 / 39.37);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO CENTIMETRE \n%f", user2, user2 * 2.54);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO MILLIMETRE \n%f", user2, user2 * 25.4);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO MICROMETER \n%f", user2, user2 * 25400);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO NANOMETRE \n%f", user2, user2 * 2.54e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO MILE \n%f", user2, user2 / 63360);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO YARD \n%f", user2, user2 / 36);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO FOOT \n%f", user2, user2 / 12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN INCH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN INCH AND IT IS CONVERTED INTO NAUTICAL MILE \n%f", user2, user2 / 72913.386);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 99)
            {
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 11: // NAUTICAL MILE TO ALL LENGTH TYPE
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR KILOMETRE\n 02 FOR METER\n 03 FOR CENTIMETRE\n 04 FOR MILLIMETRE\n 05 FOR MICROMETER\n 06 FOR NANOMETRE\n 07 FOR MILE\n 08 FOR YARD\n 09 FOR FOOT\n 10 FOR INCH\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            main();
            system("cls");
            if (converter == 11 && converter1 == 01)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO KILOMETRE \n%f", user2, user2 / 1.852);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 02)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO METER \n%f", user2, user2 / 1852);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 03)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO CENTIMETRE \n%f", user2, user2 * 185200);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 04)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO MILLIMETRE \n%f", user2, user2 * 1.852e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 05)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO MICROMETER \n%f", user2, user2 * 1.852e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 06)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO NANOMETRE \n%f", user2, user2 * 1.852e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 07)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO MILE \n%f", user2, user2 * 1.151);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 8)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO YARD \n%f", user2, user2 * 2025.372);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 9)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO FOOT \n%f", user2, user2 * 6076.115);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 10)
            {
                printf("ENTER THE LENGTH IN NAUTICAL MILE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NAUTICAL MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NAUTICAL MILE AND IT IS CONVERTED INTO INCH \n%f", user2, user2 * 72913.386);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 99)
            {
                printf("\a");
                goto back2;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back2;
            }
        }
        break;
        case 99:
        {
            printf("\a");
            goto back0;
        }
        break;
        default:
        {
            printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
            getch();
            system("cls");
            goto back2;
        }
        }
    }
    break;
    case 03: // time
    {
    back3:
        printf("\t\t\t\t_____CONVERT_____\n\a");
        printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR SECOND\n 05 FOR MINUTE\n 06 FOR HOUR\n 07 FOR DAY\n 08 FOR WEEK\n 09 FOR MONTH\n 10 FOR YEAR\n 11 FOR DECADE\n 12 FOR CENTURY\n 99 FOR GO BACK\n ");
        printf("ENTER THE NUMBER :- ");
        scanf("%d\a", &converter);
        system("cls");
        switch (converter) // TIME TO ALL SUB TYPES
        {
        case 01: // NANOSECOND TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR MICROSECOND\n 02 FOR MILLISECOND\n 03 FOR SECOND\n 04 FOR MINUTE\n 05 FOR HOUR\n 06 FOR DAY\n 07 FOR WEEK\n 08 FOR MONTH\n 09 FOR YEAR\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 01 && converter1 == 01)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 02)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 / 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 03)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 / 1e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 04)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 / 6e+10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 05)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 / 3.6e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 06)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO DAY\n %f", user2, user2 / 8.64e+13);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 07)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 / 6.048e+14);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 8)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 / 2.628e+15);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 9)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 / 3.154e+16);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 10)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 3.154e+17);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 11)
            {
                printf("ENTER THE TIME IN NANOSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN NANOSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN NANOSECOND AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 3.154e+18);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 02: // MICROSECOND TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MILLISECOND\n 03 FOR SECOND\n 04 FOR MINUTE\n 05 FOR HOUR\n 06 FOR DAY\n 07 FOR WEEK\n 08 FOR MONTH\n 09 FOR YEAR\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 02 && converter1 == 01)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 02)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 03)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 / 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 04)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 / 6e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 05)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 / 3.6e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 06)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO DAY\n %f", user2, user2 / 8.64e+10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 07)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 / 6.048e+1);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 8)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 / 2.628e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 9)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 / 3.154e+13);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 10)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 3.154e+14);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 11)
            {
                printf("ENTER THE TIME IN MICROSECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MICROSECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MICROSECOND AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 3.154e+15);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 03: // MILLISECOND TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR SECOND\n 04 FOR MINUTE\n 05 FOR HOUR\n 06 FOR DAY\n 07 FOR WEEK\n 08 FOR MONTH\n 09 FOR YEAR\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 03 && converter1 == 01)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 02)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 03)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 04)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 / 60000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 05)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 / 3.6e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 06)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO DAY\n %f", user2, user2 / 8.64e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 07)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 / 6.048e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 8)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 / 2.628e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 9)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 / 3.154e+10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 10)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 3.154e+11);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 11)
            {
                printf("ENTER THE TIME IN MILLISECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MILLISECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MILLISECOND AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 3.154e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 04: // SECOND TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR MINUTE\n 05 FOR HOUR\n 06 FOR DAY\n 07 FOR WEEK\n 08 FOR MONTH\n 09 FOR YEAR\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 04 && converter1 == 01)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 1e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 02)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 03)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 04)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 / 60);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 05)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 / 3600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 06)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO DAY\n %f", user2, user2 / 86400);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 07)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 / 60.4800);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 8)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 / 2.628e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 9)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 / 3.154e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 10)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 3.154e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 11)
            {
                printf("ENTER THE TIME IN SECOND :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SECOND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SECOND AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 3.154e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 05: // MINUTE TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR SECOND\n 05 FOR HOUR\n 06 FOR DAY\n 07 FOR WEEK\n 08 FOR MONTH\n 09 FOR YEAR\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 05 && converter1 == 01)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 6e+10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 02)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 6e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 03)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 * 60000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 04)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 * 60);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 05)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 / 60);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 06)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO DAY\n %f", user2, user2 / 1440);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 07)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 / 10080);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 8)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 / 43800.048);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 9)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 / 525600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 10)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 5.256e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 11)
            {
                printf("ENTER THE TIME IN MINUTE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MINUTE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MINUTE AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 5.256e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 06: // HOUR TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR SECOND\n 05 FOR MINUTE\n 06 FOR DAY\n 07 FOR WEEK\n 08 FOR MONTH\n 09 FOR YEAR\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 06 && converter1 == 01)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 3.6e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 02)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 3.6e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 03)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 * 3.6e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 04)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 * 3600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 05)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 * 60);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 06)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO DAY\n %f", user2, user2 / 24);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 07)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 / 168);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 8)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 / 730.001);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 9)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 / 8760);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 10)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 87600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 11)
            {
                printf("ENTER THE TIME IN HOUR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HOUR AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 876000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 07: // DAY TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR SECOND\n 05 FOR MINUTE\n 06 FOR HOUR\n 07 FOR WEEK\n 08 FOR MONTH\n 09 FOR YEAR\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 07 && converter1 == 01)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 8.64e+13);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 02)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 8.64e+10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 03)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 * 8.64e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 04)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 * 86400);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 05)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 * 1440);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 06)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 * 24);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 07)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 / 7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 8)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 / 30.417);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 9)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 / 365);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 10)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 3650);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 11)
            {
                printf("ENTER THE TIME IN DAY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DAY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DAY AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 36500);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 8: // WEEK TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR SECOND\n 05 FOR MINUTE\n 06 FOR HOUR\n 07 FOR DAY\n 08 FOR MONTH\n 09 FOR YEAR\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 8 && converter1 == 01)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 6.048e+14);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 02)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 6.048e+11);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 03)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 * 6.048e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 04)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 * 604800);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 05)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 * 10080);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 06)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 * 168);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 07)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO DAY\n %f", user2, user2 * 7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 8)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 / 4.345);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 9)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 / 52.143);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 10)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 521.429);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 11)
            {
                printf("ENTER THE TIME IN WEEK :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WEEK", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WEEK AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 5214.286);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 9: // MONTH TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR SECOND\n 05 FOR MINUTE\n 06 FOR HOUR\n 07 FOR DAY\n 08 FOR WEEK\n 09 FOR YEAR\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 9 && converter1 == 01)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 2.628e+15);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 02)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 2.628e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 03)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 * 2.628e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 04)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 * 2.628e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 05)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 * 43800.048);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 06)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 * 730.001);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 07)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO DAY\n %f", user2, user2 * 30.417);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 8)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 * 4.345);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 9)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 / 12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 10)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 120);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 11)
            {
                printf("ENTER THE TIME IN MONTH :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN MONTH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN MONTH AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 1199.999);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 10: // YEAR TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR SECOND\n 05 FOR MINUTE\n 06 FOR HOUR\n 07 FOR DAY\n 08 FOR WEEK\n 09 FOR MONTH\n 10 FOR DECADE\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 10 && converter1 == 01)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 3.154e+16);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 02)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 3.154e+13);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 03)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 * 3.154e+10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 04)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 * 3.154e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 05)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 * 525600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 06)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 * 8760);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 07)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO DAY\n %f", user2, user2 * 365);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 8)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 * 52.143);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 9)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 / 12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 10)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 / 10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 11)
            {
                printf("ENTER THE TIME IN YEAR :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN YEAR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN YEAR AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 100);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 11: // DECADE TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR SECOND\n 05 FOR MINUTE\n 06 FOR HOUR\n 07 FOR DAY\n 08 FOR WEEK\n 09 FOR MONTH\n 10 FOR YEAR\n 11 FOR CENTURY\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 11 && converter1 == 01)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 3.154e+17);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 02)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 3.154e+14);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 03)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 * 3.154e+11);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 04)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 * 3.154e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 05)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 * 5.256e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 06)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 * 87600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 07)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO DAY\n %f", user2, user2 * 3650);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 8)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 * 521.429);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 9)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 * 120);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 10)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 * 10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 11)
            {
                printf("ENTER THE TIME IN DECADE :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN DECADE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN DECADE AND IT IS CONVERTED INTO CENTURY\n %f", user2, user2 / 10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 11 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 12: // CENTURY TO ALL TIME TYPES
        {
            printf("\t\t\t\t_____CONVERT_____\n\a");
            printf(" ENTER \n 01 FOR NANOSECOND\n 02 FOR MICROSECOND\n 03 FOR MILLISECOND\n 04 FOR SECOND\n 05 FOR MINUTE\n 06 FOR HOUR\n 07 FOR DAY\n 08 FOR WEEK\n 09 FOR MONTH\n 10 FOR YEAR\n 11 FOR DECADE\n 99 FOR GO BACK");
            printf("\n ENTER THE NUMBER :- ");
            scanf("%d\a", &converter1);
            system("cls");
            if (converter == 12 && converter1 == 01)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO NANOSECOND\n %f", user2, user2 * 3.154e+18);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 02)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO MICROSECOND\n %f", user2, user2 * 3.154e+15);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 03)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO MILLISECOND\n %f", user2, user2 * 3.154e+12);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 04)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO SECOND\n %f", user2, user2 * 3.154e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 05)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO MINUTE\n %f", user2, user2 * 5.256e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 06)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO HOUR\n %f", user2, user2 * 876000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 07)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO DAY\n %f", user2, user2 * 36500);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 8)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO WEEK\n %f", user2, user2 * 5214.286);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 9)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO MONTH\n %f", user2, user2 * 1199.999);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 10)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO YEAR\n %f", user2, user2 * 100);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 11)
            {
                printf("ENTER THE TIME IN CENTURY :-");
                scanf("%f\a", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN CENTURY", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN CENTURY AND IT IS CONVERTED INTO DECADE\n %f", user2, user2 * 10);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 12 && converter1 == 99)
            {
                printf("\a");
                goto back3;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back3;
            }
        }
        break;
        case 99:
        {
            printf("\a");
            goto back0;
        }
        break;
        default:
        {
            printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
            getch();
            system("cls");
            goto back0;
        }
        }
        break;
    case 04: // AREA
    {
    back4:
        printf("\t\t\t\t_____CONVERT_____\n");
        printf(" ENTER \n 01 FOR SQUARE KILOMETER\n 02 FOR SQUARE METRE\n 03 FOR SQUARE MILE\n 04 FOR SQUARE YARD\n 05 FOR SQUARE FOOT\n 06 FOR SQUARE INCH\n 07 FOR HECTARE\n 08 FOR ACRE\n 99 FOR GO BACK\n");
        printf(" ENTER THE NUMBER :- ");
        scanf("%d", &converter);
        system("cls");
        switch (converter)
        {
        case 01: // AREA TYPE SQUARE KILOMETER
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR SQUARE METRE\n 02 FOR SQUARE MILE\n 03 FOR SQUARE YARD\n 04 FOR SQUARE FOOT\n 05 FOR SQUARE INCH\n 06 FOR HECTARE\n 07 FOR ACRE\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 1 && converter1 == 1)
            {
                printf("ENTER THE AREA IN SQUARE KILOMETER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE KILOMETER AND IT IS CONVERTED INTO SQUARE METRE %f", user2, user2 * 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 1 && converter1 == 2)
            {
                printf("ENTER THE AREA IN SQUARE KILOMETER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE KILOMETER AND IT IS CONVERTED INTO SQUARE MILE %f", user2, user2 / 2.590);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 1 && converter1 == 3)
            {
                printf("ENTER THE AREA IN SQUARE KILOMETER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE KILOMETER AND IT IS CONVERTED INTO SQUARE YARD %f", user2, user2 * 1.196e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 1 && converter1 == 4)
            {
                printf("ENTER THE AREA IN SQUARE KILOMETER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE KILOMETER AND IT IS CONVERTED INTO SQUARE FOOT %f", user2, user2 * 1.076e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 1 && converter1 == 5)
            {
                printf("ENTER THE AREA IN SQUARE KILOMETER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE KILOMETER AND IT IS CONVERTED INTO SQUARE INCH %f", user2, user2 * 1.55e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 1 && converter1 == 6)
            {
                printf("ENTER THE AREA IN SQUARE KILOMETER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE KILOMETER AND IT IS CONVERTED INTO HECTARE %f", user2, user2 * 100);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 1 && converter1 == 7)
            {
                printf("ENTER THE AREA IN SQUARE KILOMETER :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE KILOMETER", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE KILOMETER AND IT IS CONVERTED INTO ACRE %f", user2, user2 * 247.105);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 1 && converter1 == 99)
            {
                printf("\a");
                goto back4;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back4;
            }
        }
        break;
        case 02: // AREA TYPE SQUARE METRE
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR SQUARE KILOMETRE\n 02 FOR SQUARE MILE\n 03 FOR SQUARE YARD\n 04 FOR SQUARE FOOT\n 05 FOR SQUARE INCH\n 06 FOR HECTARE\n 07 FOR ACRE\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 2 && converter1 == 1)
            {
                printf("ENTER THE AREA IN SQUARE METRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE METRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE METRE AND IT IS CONVERTED INTO SQUARE KILOMETER %f", user2, user2 / 1e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 2 && converter1 == 2)
            {
                printf("ENTER THE AREA IN SQUARE METRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE METRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE METRE AND IT IS CONVERTED INTO SQUARE MILE %f", user2, user2 / 2.59e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 2 && converter1 == 3)
            {
                printf("ENTER THE AREA IN SQUARE METRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE METRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE METRE AND IT IS CONVERTED INTO SQUARE YARD %f", user2, user2 * 1.196);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 2 && converter1 == 4)
            {
                printf("ENTER THE AREA IN SQUARE METRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE METRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE METRE AND IT IS CONVERTED INTO SQUARE FOOT %f", user2, user2 * 10.764);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 2 && converter1 == 5)
            {
                printf("ENTER THE AREA IN SQUARE METRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE METRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE METRE AND IT IS CONVERTED INTO SQUARE INCH %f", user2, user2 * 1550.003);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 2 && converter1 == 6)
            {
                printf("ENTER THE AREA IN SQUARE METRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE METRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE METRE AND IT IS CONVERTED INTO HECTARE %f", user2, user2 / 10000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 2 && converter1 == 7)
            {
                printf("ENTER THE AREA IN SQUARE METRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE METRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE METRE AND IT IS CONVERTED INTO ACRC %f", user2, user2 / 4046.856);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 2 && converter1 == 99)
            {
                printf("\a");
                goto back4;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back4;
            }
        }
        break;
        case 3:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR SQUARE KILOMETRE\n 02 FOR SQUARE METRE\n 03 FOR SQUARE YARD\n 04 FOR SQUARE FOOT\n 05 FOR SQUARE INCH\n 06 FOR HECTARE\n 07 FOR ACRE\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 3 && converter1 == 1)
            {
                printf("ENTER THE AREA IN SQUARE MILE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE MILE AND IT IS CONVERTED INTO SQUARE KILOMETER %f", user2, user2 * 2.59);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 3 && converter1 == 2)
            {
                printf("ENTER THE AREA IN SQUARE MILE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE MILE AND IT IS CONVERTED INTO SQUARE METRE %f", user2, user2 * 2.59e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 3 && converter1 == 3)
            {
                printf("ENTER THE AREA IN SQUARE MILE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE MILE AND IT IS CONVERTED INTO SQUARE YARD %f", user2, user2 * 2.59e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 3 && converter1 == 4)
            {
                printf("ENTER THE AREA IN SQUARE MILE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE MILE AND IT IS CONVERTED INTO SQUARE FOOT %f", user2, user2 * 2.788e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 3 && converter1 == 5)
            {
                printf("ENTER THE AREA IN SQUARE MILE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE MILE AND IT IS CONVERTED INTO SQUARE INCH %f", user2, user2 * 4.014e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 3 && converter1 == 6)
            {
                printf("ENTER THE AREA IN SQUARE MILE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE MILE AND IT IS CONVERTED INTO HECTARE %f", user2, user2 * 258.999);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 3 && converter1 == 7)
            {
                printf("ENTER THE AREA IN SQUARE MILE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE MILE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE MILE AND IT IS CONVERTED INTO ACRE %f", user2, user2 * 640);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 3 && converter1 == 99)
            {
                printf("\a");
                goto back4;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back4;
            }
        }
        break;
        case 4:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR SQUARE KILOMETRE\n 02 FOR SQUARE METRE\n 03 FOR SQUARE MILE\n 04 FOR SQUARE FOOT\n 05 FOR SQUARE INCH\n 06 FOR HECTARE\n 07 FOR ACRE\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 4 && converter1 == 1)
            {
                printf("ENTER THE AREA IN SQUARE YARD :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE YARD AND IT IS CONVERTED INTO SQUARE KILOMETER %f", user2, user2 / 1.196e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 4 && converter1 == 2)
            {
                printf("ENTER THE AREA IN SQUARE YARD :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE YARD AND IT IS CONVERTED INTO SQUARE METRE %f", user2, user2 / 1.196);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 4 && converter1 == 3)
            {
                printf("ENTER THE AREA IN SQUARE YARD :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE YARD AND IT IS CONVERTED INTO SQUARE MILE %f", user2, user2 / 3.098e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 4 && converter1 == 4)
            {
                printf("ENTER THE AREA IN SQUARE YARD :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE YARD AND IT IS CONVERTED INTO SQUARE FOOT %f", user2, user2 * 9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 4 && converter1 == 5)
            {
                printf("ENTER THE AREA IN SQUARE YARD :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE YARD AND IT IS CONVERTED INTO SQUARE INCH %f", user2, user2 * 1296);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 4 && converter1 == 6)
            {
                printf("ENTER THE AREA IN SQUARE YARD :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE YARD AND IT IS CONVERTED INTO HECTARE %f", user2, user2 / 11959.9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 4 && converter1 == 7)
            {
                printf("ENTER THE AREA IN SQUARE YARD :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE YARD", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE YARD AND IT IS CONVERTED INTO ACRE %f", user2, user2 / 4840);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 4 && converter1 == 99)
            {
                printf("\a");
                goto back4;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back4;
            }
        }
        break;
        case 5:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR SQUARE KILOMETRE\n 02 FOR SQUARE METRE\n 03 FOR SQUARE MILE\n 04 FOR SQUARE YARD\n 05 FOR SQUARE INCH\n 06 FOR HECTARE\n 07 FOR ACRE\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 5 && converter1 == 1)
            {
                printf("ENTER THE AREA IN SQUARE FOOT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE FOOT AND IT IS CONVERTED INTO SQUARE KILOMETER %f", user2, user2 / 1.076e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 5 && converter1 == 2)
            {
                printf("ENTER THE AREA IN SQUARE FOOT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE FOOT AND IT IS CONVERTED INTO SQUARE METRE %f", user2, user2 / 10.764);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 5 && converter1 == 3)
            {
                printf("ENTER THE AREA IN SQUARE FOOT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE FOOT AND IT IS CONVERTED INTO SQUARE MILE %f", user2, user2 / 2.788e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 5 && converter1 == 4)
            {
                printf("ENTER THE AREA IN SQUARE FOOT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE FOOT AND IT IS CONVERTED INTO SQUARE YARD %f", user2, user2 / 9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 5 && converter1 == 5)
            {
                printf("ENTER THE AREA IN SQUARE FOOT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE FOOT AND IT IS CONVERTED INTO SQUARE INCH %f", user2, user2 * 144);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 5 && converter1 == 6)
            {
                printf("ENTER THE AREA IN SQUARE FOOT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE FOOT AND IT IS CONVERTED INTO HECTARE %f", user2, user2 / 107639.104);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 5 && converter1 == 7)
            {
                printf("ENTER THE AREA IN SQUARE FOOT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE FOOT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE FOOT AND IT IS CONVERTED INTO ACRE %f", user2, user2 / 43560);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 5 && converter1 == 99)
            {
                printf("\a");
                goto back4;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back4;
            }
        }
        break;
        case 6:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR SQUARE KILOMETRE\n 02 FOR SQUARE METRE\n 03 FOR SQUARE MILE\n 04 FOR SQUARE YARD\n 05 FOR SQUARE FOOT\n 06 FOR HECTARE\n 07 FOR ACRE\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 6 && converter1 == 1)
            {
                printf("ENTER THE AREA IN SQUARE INCH :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE INCH AND IT IS CONVERTED INTO SQUARE KILOMETER %f", user2, user2 / 1.55e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 6 && converter1 == 2)
            {
                printf("ENTER THE AREA IN SQUARE INCH :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE INCH AND IT IS CONVERTED INTO SQUARE METRE %f", user2, user2 / 1550.003);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 6 && converter1 == 3)
            {
                printf("ENTER THE AREA IN SQUARE INCH :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE INCH AND IT IS CONVERTED INTO SQUARE MILE %f", user2, user2 / 4.014e+9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 6 && converter1 == 4)
            {
                printf("ENTER THE AREA IN SQUARE INCH :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE INCH AND IT IS CONVERTED INTO SQUARE YARD %f", user2, user2 / 1296);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 6 && converter1 == 5)
            {
                printf("ENTER THE AREA IN SQUARE INCH :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE INCH AND IT IS CONVERTED INTO SQUARE FOOT %f", user2, user2 / 144);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 6 && converter1 == 6)
            {
                printf("ENTER THE AREA IN SQUARE INCH :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE INCH AND IT IS CONVERTED INTO HECTARE %f", user2, user2 / 1.55e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 6 && converter1 == 7)
            {
                printf("ENTER THE AREA IN SQUARE INCH :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN SQUARE INCH", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN SQUARE INCH AND IT IS CONVERTED INTO ACRE %f", user2, user2 / 6.273e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 6 && converter1 == 99)
            {
                printf("\a");
                goto back4;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back4;
            }
        }
        break;
        case 7:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR SQUARE KILOMETRE\n 02 FOR SQUARE METRE\n 03 FOR SQUARE MILE\n 04 FOR SQUARE YARD\n 05 FOR SQUARE FOOT\n 06 FOR INCH\n 07 FOR ACRE\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 7 && converter1 == 1)
            {
                printf("ENTER THE AREA IN HECTARE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HECTARE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HECTARE AND IT IS CONVERTED INTO SQUARE KILOMETER %f", user2, user2 / 0.01);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 7 && converter1 == 2)
            {
                printf("ENTER THE AREA IN HECTARE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HECTARE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HECTARE AND IT IS CONVERTED INTO SQUARE METRE %f", user2, user2 * 10000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 7 && converter1 == 3)
            {
                printf("ENTER THE AREA IN HECTARE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HECTARE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HECTARE AND IT IS CONVERTED INTO SQUARE MILE %f", user2, user2 / 258.999);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 7 && converter1 == 4)
            {
                printf("ENTER THE AREA IN HECTARE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HECTARE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HECTARE AND IT IS CONVERTED INTO SQUARE YARD %f", user2, user2 * 11959.9);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 7 && converter1 == 5)
            {
                printf("ENTER THE AREA IN HECTARE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HECTARE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HECTARE AND IT IS CONVERTED INTO SQUARE FOOT %f", user2, user2 * 107639.140);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 7 && converter1 == 6)
            {
                printf("ENTER THE AREA IN HECTARE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HECTARE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HECTARE AND IT IS CONVERTED INTO SQUARE INCH %f", user2, user2 * 1.55e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 7 && converter1 == 7)
            {
                printf("ENTER THE AREA IN HECTARE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN HECTARE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN HECTARE AND IT IS CONVERTED INTO ACRE %f", user2, user2 * 2.471);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 7 && converter1 == 99)
            {
                printf("\a");
                goto back4;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back4;
            }
        }
        break;
        case 8:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR SQUARE KILOMETRE\n 02 FOR SQUARE METRE\n 03 FOR SQUARE MILE\n 04 FOR SQUARE YARD\n 05 FOR SQUARE FOOT\n 06 FOR INCH\n 07 FOR HECTARE\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 8 && converter1 == 1)
            {
                printf("ENTER THE AREA IN ACRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ACRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ACRE AND IT IS CONVERTED INTO SQUARE KILOMETER %f", user2, user2 / 247.105);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 2)
            {
                printf("ENTER THE AREA IN ACRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ACRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ACRE AND IT IS CONVERTED INTO SQUARE METRE %f", user2, user2 * 406.856);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 3)
            {
                printf("ENTER THE AREA IN ACRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ACRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ACRE AND IT IS CONVERTED INTO SQUARE MILE %f", user2, user2 / 640);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 4)
            {
                printf("ENTER THE AREA IN ACRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ACRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ACRE AND IT IS CONVERTED INTO SQUARE YARD %f", user2, user2 * 4840);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 5)
            {
                printf("ENTER THE AREA IN ACRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ACRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ACRE AND IT IS CONVERTED INTO SQUARE FOOT %f", user2, user2 * 43560);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 6)
            {
                printf("ENTER THE AREA IN ACRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ACRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ACRE AND IT IS CONVERTED INTO SQUARE INCH %f", user2, user2 * 6.273e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 7)
            {
                printf("ENTER THE AREA IN ACRE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ACRE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ACRE AND IT IS CONVERTED INTO HECTARE %f", user2, user2 / 2.471);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 99)
            {
                printf("\a");
                goto back4;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back4;
            }
        }
        break;
        case 99:
        {
            printf("\a");
            goto back0;
        }
        break;
        default:
        {
            printf("\t\t\t\tINVALID INPUT \n \t\t\t\t TRY AGAIN\a");
            getch();
            system("cls");
            goto back0;
        }
        }

    } // AREA
    break;
    case 5: // ENERGY
    {
    back5:
        printf("\t\t\t\t_____CONVERT_____\n");
        printf(" ENTER \n 01 FOR JOULE\n 02 FOR KILOJOULE\n 03 FOR GRAM CALORIE\n 04 FOR KILO CALORIE\n 05 FOR WATT HOUR\n 06 FOR KILOWATT HOUR\n 07 FOR ELECTRONVOLT\n 08 FOR BRITISH THERMAL UNIT\n 09 FOR US THERM\n 10 FOR FOOT-POUND\n 99 FOR GO BACK\n");
        printf(" ENTER THE NUMBER :- ");
        scanf("%d", &converter);
        system("cls");
        switch (converter)
        {
        case 01:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR KILOJOULE\n 02 FOR GRAM CALORIE\n 03 FOR KILO CALORIE\n 04 FOR WATT HOUR\n 05 FOR KILOWATT HOUR\n 06 FOR ELECTRONVOLT\n 07 FOR BRITISH THERMAL UNIT\n 08 FOR US THERM\n 09 FOR FOOT-POUND\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 01 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN JOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN JOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN JOULE AND IT IS CONVERTED INTO KLIOJOULE %f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN JOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN JOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN JOULE AND IT IS CONVERTED INTO GRAM CALORIE %f", user2, user2 / 4.184);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN JOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN JOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN JOULE AND IT IS CONVERTED INTO KLIOCALORIE %f", user2, user2 / 4184);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN JOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN JOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN JOULE AND IT IS CONVERTED INTO WATT HOUR %f", user2, user2 / 3600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN JOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN JOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN JOULE AND IT IS CONVERTED INTO KILOWATT HOUR %f", user2, user2 / 3.6e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN JOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN JOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN JOULE AND IT IS CONVERTED INTO ELECTRONVOLT %f", user2, user2 * 6.242e+18);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 07)
            {
                printf("ENTER THE ENERGY IN JOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN JOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN JOULE AND IT IS CONVERTED INTO BRITISH THERMAL UNIT %f", user2, user2 / 1055.056);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN JOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN JOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN JOULE AND IT IS CONVERTED INTO US THERM %f", user2, user2 / 1.055e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN JOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN JOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN JOULE AND IT IS CONVERTED INTO FOOT POUND %f", user2, user2 / 1.356);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 01 && converter1 == 99)
            {
                printf("\a");
                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 02:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR JOULE\n 02 FOR GRAM CALORIE\n 03 FOR KILO CALORIE\n 04 FOR WATT HOUR\n 05 FOR KILOWATT HOUR\n 06 FOR ELECTRONVOLT\n 07 FOR BRITISH THERMAL UNIT\n 08 FOR US THERM\n 09 FOR FOOT-POUND\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 02 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN KLIOJOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KLIOJOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KLIOJOULE AND IT IS CONVERTED INTO JOULE %f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN KLIOJOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KLIOJOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KLIOJOULE AND IT IS CONVERTED INTO GRAM CALORIE %f", user2, user2 * 239.006);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN KLIOJOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KLIOJOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KLIOJOULE AND IT IS CONVERTED INTO KILOCALORIE %f", user2, user2 / 4.184);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN KLIOJOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KLIOJOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KLIOJOULE AND IT IS CONVERTED INTO WATT HOUR %f", user2, user2 / 3.6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN KLIOJOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KLIOJOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KLIOJOULE AND IT IS CONVERTED INTO KILOWATT HOUR %f", user2, user2 / 3600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN KLIOJOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KLIOJOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KLIOJOULE AND IT IS CONVERTED INTO ELECTONVOLT %f", user2, user2 * 6.242e+21);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 07)
            {
                printf("ENTER THE ENERGY IN KLIOJOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KLIOJOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KLIOJOULE AND IT IS CONVERTED INTO BRITISH THERMAL UNIT %f", user2, user2 / 1.055);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN KLIOJOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KLIOJOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KLIOJOULE AND IT IS CONVERTED INTO US THERM %f", user2, user2 / 105480.4);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN KLIOJOULE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KLIOJOULE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KLIOJOULE AND IT IS CONVERTED INTO FOOT-POUND  %f", user2, user2 * 737.562);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 02 && converter1 == 99)
            {
                printf("\a");
                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 03:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR JOULE\n 02 FOR KLIOJOULE\n 03 FOR KILO CALORIE\n 04 FOR WATT HOUR\n 05 FOR KILOWATT HOUR\n 06 FOR ELECTRONVOLT\n 07 FOR BRITISH THERMAL UNIT\n 08 FOR US THERM\n 09 FOR FOOT-POUND\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 03 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN GRAM CALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN GRAM CALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN GRAM CALORIE AND IT IS CONVERTED INTO JOULE %f", user2, user2 * 4.184);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN GRAM CALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN GRAM CALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN GRAM CALORIE AND IT IS CONVERTED INTO KLIOJOULE %f", user2, user2 / 239.006);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN GRAM CALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN GRAM CALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN GRAM CALORIE AND IT IS CONVERTED INTO KILOCALORIE %f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN GRAM CALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN GRAM CALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN GRAM CALORIE AND IT IS CONVERTED INTO WATT HOUR %f", user2, user2 / 860.421);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN GRAM CALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN GRAM CALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN GRAM CALORIE AND IT IS CONVERTED INTO KILOWATT HOUR %f", user2, user2 / 860420.65);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN GRAM CALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN GRAM CALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN GRAM CALORIE AND IT IS CONVERTED INTO ELECTONVOLT %f", user2, user2 * 2.611e+19);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 07)
            {
                printf("ENTER THE ENERGY IN GRAM CALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN GRAM CALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN GRAM CALORIE AND IT IS CONVERTED INTO BRITISH THERMAL UNIT %f", user2, user2 / 252.164);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN GRAM CALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN GRAM CALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN GRAM CALORIE AND IT IS CONVERTED INTO US THERM %f", user2, user2 / 2.521e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN GRAM CALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN GRAM CALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN GRAM CALORIE AND IT IS CONVERTED INTO FOOT-POUND  %f", user2, user2 * 3.086);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 03 && converter1 == 99)
            {
                printf("\a");
                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 04:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR JOULE\n 02 FOR KLIOJOULE\n 03 FOR GRAM CALORIE\n 04 FOR WATT HOUR\n 05 FOR KILOWATT HOUR\n 06 FOR ELECTRONVOLT\n 07 FOR BRITISH THERMAL UNIT\n 08 FOR US THERM\n 09 FOR FOOT-POUND\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 04 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN KILOCALORIE:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOCALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOCALORIE AND IT IS CONVERTED INTO JOULE %f", user2, user2 * 4184);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN KILOCALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOCALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOCALORIE AND IT IS CONVERTED INTO KLIOJOULE %f", user2, user2 * 4.184);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN KILOCALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOCALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOCALORIE AND IT IS CONVERTED INTO GRAM CALORIE %f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN KILOCALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOCALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOCALORIE AND IT IS CONVERTED INTO WATT HOUR %f", user2, user2 * 1.162);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN KILOCALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOCALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOCALORIE AND IT IS CONVERTED INTO KILOWATT HOUR %f", user2, user2 / 860.421);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN KILOCALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOCALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOCALORIE AND IT IS CONVERTED INTO ELECTONVOLT %f", user2, user2 * 2.611e+22);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 07)
            {
                printf("ENTER THE ENERGY IN KILOCALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOCALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOCALORIE AND IT IS CONVERTED INTO BRITISH THERMAL UNIT %f", user2, user2 * 3.966);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN KILOCALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOCALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOCALORIE AND IT IS CONVERTED INTO US THERM %f", user2, user2 / 25210.421);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN KILOCALORIE :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOCALORIE", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOCALORIE AND IT IS CONVERTED INTO FOOT-POUND  %f", user2, user2 * 3085.96);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 04 && converter1 == 99)
            {
                printf("\a");
                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 5:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR JOULE\n 02 FOR KLIOJOULE\n 03 FOR GRAM CALORIE\n 04 FOR KILOCALORIE\n 05 FOR KILOWATT HOUR\n 06 FOR ELECTRONVOLT\n 07 FOR BRITISH THERMAL UNIT\n 08 FOR US THERM\n 09 FOR FOOT-POUND\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 05 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN WATT HOUR:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WATT HOUR AND IT IS CONVERTED INTO JOULE %f", user2, user2 * 3600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN WATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WATT HOUR AND IT IS CONVERTED INTO KLIOJOULE %f", user2, user2 * 3.6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN WATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WATT HOUR AND IT IS CONVERTED INTO GRAM CALORIE %f", user2, user2 * 860.421);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN WATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WATT HOUR AND IT IS CONVERTED INTO KILOCALORIE %f", user2, user2 / 1.162);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN WATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WATT HOUR AND IT IS CONVERTED INTO KILOWATT HOUR %f", user2, user2 / 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN WATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WATT HOUR AND IT IS CONVERTED INTO ELECTONVOLT %f", user2, user2 * 2.247e+22);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 07)
            {
                printf("ENTER THE ENERGY IN WATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WATT HOUR AND IT IS CONVERTED INTO BRITISH THERMAL UNIT %f", user2, user2 * 3.412);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN WATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WATT HOUR AND IT IS CONVERTED INTO US THERM %f", user2, user2 / 29300.111);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN WATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN WATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN WATT HOUR AND IT IS CONVERTED INTO FOOT-POUND  %f", user2, user2 * 2655.224);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 05 && converter1 == 99)
            {
                printf("\a");
                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 6:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR JOULE\n 02 FOR KLIOJOULE\n 03 FOR GRAM CALORIE\n 04 FOR KILOCALORIE\n 05 FOR WATT HOUR\n 06 FOR ELECTRONVOLT\n 07 FOR BRITISH THERMAL UNIT\n 08 FOR US THERM\n 09 FOR FOOT-POUND\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 06 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN KILOWATT HOUR:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOWATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOWATT HOUR AND IT IS CONVERTED INTO JOULE %f", user2, user2 * 3.6e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN KILOWATT HOUR:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOWATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOWATT HOUR AND IT IS CONVERTED INTO KLIOJOULE %f", user2, user2 * 3600);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN KILOWATT HOUR:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOWATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOWATT HOUR AND IT IS CONVERTED INTO GRAM CALORIE %f", user2, user2 * 860420.65);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN KILOWATT HOUR:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOWATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOWATT HOUR AND IT IS CONVERTED INTO KILOCALORIE %f", user2, user2 * 860.421);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN KILOWATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOWATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOWATT HOUR AND IT IS CONVERTED INTO WATT HOUR %f", user2, user2 * 1000);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN KILOWATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOWATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOWATT HOUR AND IT IS CONVERTED INTO ELECTONVOLT %f", user2, user2 * 2.247e+25);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 07)
            {
                printf("ENTER THE ENERGY IN KILOWATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOWATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOWATT HOUR AND IT IS CONVERTED INTO BRITISH THERMAL UNIT %f", user2, user2 * 3412.142);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN KILOWATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOWATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOWATT HOUR AND IT IS CONVERTED INTO US THERM %f", user2, user2 / 29.3);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN KILOWATT HOUR :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN KILOWATT HOUR", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN KILOWATT HOUR AND IT IS CONVERTED INTO FOOT-POUND  %f", user2, user2 * 2.6555e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 06 && converter1 == 99)
            {
                printf("\a");

                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 7:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR JOULE\n 02 FOR KLIOJOULE\n 03 FOR GRAM CALORIE\n 04 FOR KILOCALORIE\n 05 FOR WATT HOUR\n 06 FOR KILOWATT HOUR\n 07 FOR BRITISH THERMAL UNIT\n 08 FOR US THERM\n 09 FOR FOOT-POUND\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 07 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN ELECTRONVOLT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ELECTRONVOLT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ELECTRONVOLT AND IT IS CONVERTED INTO JOULE %f", user2, user2 / 6.242e+18);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN ELECTRONVOLT:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ELECTRONVOLT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ELECTRONVOLT HOUR AND IT IS CONVERTED INTO KLIOJOULE %f", user2, user2 / 6.242e+21);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN ELECTRONVOLT:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ELECTRONVOLT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ELECTRONVOLT AND IT IS CONVERTED INTO GRAM CALORIE %f", user2, user2 * 2.611e+19);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN ELECTRONVOLT:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ELECTRONVOLT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ELECTRONVOLT AND IT IS CONVERTED INTO KILOCALORIE %f", user2, user2 * 2.611e+22);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN ELECTRONVOLT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ELECTRONVOLT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ELECTRONVOLT AND IT IS CONVERTED INTO WATT HOUR %f", user2, user2 / 2.247e+22);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN ELECTRONVOLT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ELECTRONVOLT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ELECTRONVOLT AND IT IS CONVERTED INTO KILOWATT HOUR %f", user2, user2 / 2.247e+25);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 07)
            {
                printf("ENTER THE ENERGY IN ELECTRONVOLT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ELECTRONVOLT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ELECTRONVOLT AND IT IS CONVERTED INTO BRITISH THERMAL UNIT %f", user2, user2 / 6.585e+21);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN ELECTRONVOLT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ELECTRONVOLT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ELECTRONVOLT AND IT IS CONVERTED INTO US THERM %f", user2, user2 / 6.584e+26);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN ELECTRONVOLT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN ELECTRONVOLT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN ELECTRONVOLT AND IT IS CONVERTED INTO FOOT-POUND  %f", user2, user2 * 8.462e+18);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 07 && converter1 == 99)
            {
                printf("\a");
                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 8:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR JOULE\n 02 FOR KLIOJOULE\n 03 FOR GRAM CALORIE\n 04 FOR KILOCALORIE\n 05 FOR WATT HOUR\n 06 FOR KILOWATT HOUR\n 07 FOR ELECTRONVOLT\n 08 FOR US THERM\n 09 FOR FOOT-POUND\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 8 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN BRITISH THERMAL UNIT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT AND IT IS CONVERTED INTO JOULE %f", user2, user2 * 1055.056);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN BRITISH THERMAL UNIT:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT HOUR AND IT IS CONVERTED INTO KLIOJOULE %f", user2, user2 * 1.055);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN BRITISH THERMAL UNIT:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT AND IT IS CONVERTED INTO GRAM CALORIE %f", user2, user2 * 252.164);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN BRITISH THERMAL UNIT:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT AND IT IS CONVERTED INTO KILOCALORIE %f", user2, user2 / 3.966);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN BRITISH THERMAL UNIT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT AND IT IS CONVERTED INTO WATT HOUR %f", user2, user2 / 3.412);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN BRITISH THERMAL UNIT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT AND IT IS CONVERTED INTO KILOWATT HOUR %f", user2, user2 / 3412.142);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 7)
            {
                printf("ENTER THE ENERGY IN BRITISH THERMAL UNIT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT AND IT IS CONVERTED INTO ELECTRONVOLT %f", user2, user2 * 6.585e+21);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN BRITISH THERMAL UNIT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT AND IT IS CONVERTED INTO US THERM %f", user2, user2 / 99976.129);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN BRITISH THERMAL UNIT :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN BRITISH THERMAL UNIT AND IT IS CONVERTED INTO FOOT-POUND  %f", user2, user2 * 778.169);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 8 && converter1 == 99)
            {
                printf("\a");
                system("cls");
                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 9:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR JOULE\n 02 FOR KLIOJOULE\n 03 FOR GRAM CALORIE\n 04 FOR KILOCALORIE\n 05 FOR WATT HOUR\n 06 FOR KILOWATT HOUR\n 07 FOR ELECTRONVOLT\n 08 FOR BRITISH THERMAL UNIT\n 09 FOR FOOT-POUND\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 9 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN US THERM :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN US THERM UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM UNIT AND IT IS CONVERTED INTO JOULE %f", user2, user2 * 1.055e+8);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN US THERM:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN US THERM UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM AND IT IS CONVERTED INTO KLIOJOULE %f", user2, user2 * 105480);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN US THERM:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN US THERM UNIT", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM UNIT AND IT IS CONVERTED INTO GRAM CALORIE %f", user2, user2 * 2.521e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN US THERM:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN US THERM", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM AND IT IS CONVERTED INTO KILOCALORIE %f", user2, user2 * 25210.421);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN US THERM:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN US THERM", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM AND IT IS CONVERTED INTO WATT HOUR %f", user2, user2 * 29300.111);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN US THERM :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN US THERM", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM AND IT IS CONVERTED INTO KILOWATT HOUR %f", user2, user2 * 29.3);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 7)
            {
                printf("ENTER THE ENERGY IN US THERM :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN US THERM", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM AND IT IS CONVERTED INTO ELECTRONVOLT %f", user2, user2 * 6.584e+26);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN US THERM :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN US THERM", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM AND IT IS CONVERTED INTO BRITISH THERMAL UNIT %f", user2, user2 * 99976.129);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN US THERM :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN US THERM", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM AND IT IS CONVERTED INTO FOOT-POUND  %f", user2, user2 * 7.78e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 9 && converter1 == 99)
            {
                printf("\a");
                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 10:
        {
            printf("\t\t\t\t_____CONVERT_____\n");
            printf(" ENTER \n 01 FOR JOULE\n 02 FOR KLIOJOULE\n 03 FOR GRAM CALORIE\n 04 FOR KILOCALORIE\n 05 FOR WATT HOUR\n 06 FOR KILOWATT HOUR\n 07 FOR ELECTRONVOLT\n 08 FOR BRITISH THERMAL UNIT\n 09 FOR US THERM\n 99 FOR GO BACK\n");
            printf(" ENTER THE NUMBER :- ");
            scanf("%d", &converter1);
            system("cls");
            if (converter == 10 && converter1 == 01)
            {
                printf("ENTER THE ENERGY IN FOOT-POUND :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT-POUND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT-POUND AND IT IS CONVERTED INTO JOULE %f", user2, user2 * 1.356);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 02)
            {
                printf("ENTER THE ENERGY IN FOOT-POUND:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT-POUND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT-POUND AND IT IS CONVERTED INTO KLIOJOULE %f", user2, user2 * 737.562);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 03)
            {
                printf("ENTER THE ENERGY IN FOOT-POUND:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT-POUND ", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN US THERM  AND IT IS CONVERTED INTO GRAM CALORIE %f", user2, user2 / 3.086);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 04)
            {
                printf("ENTER THE ENERGY IN FOOT-POUND:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT-POUND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT-POUND AND IT IS CONVERTED INTO KILOCALORIE %f", user2, user2 / 3085.96);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 05)
            {
                printf("ENTER THE ENERGY IN FOOT-POUND:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT-POUND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT-POUND AND IT IS CONVERTED INTO WATT HOUR %f", user2, user2 / 2655.224);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 06)
            {
                printf("ENTER THE ENERGY IN FOOT-POUND :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT-POUND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT-POUND AND IT IS CONVERTED INTO KILOWATT HOUR %f", user2, user2 / 2.655e+6);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 7)
            {
                printf("ENTER THE ENERGY IN FOOT-POUND :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT-POUND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT-POUND AND IT IS CONVERTED INTO ELECTRONVOLT %f", user2, user2 * 8.462e+18);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 8)
            {
                printf("ENTER THE ENERGY IN FOOT-POUND:-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT-POUND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT-POUND AND IT IS CONVERTED INTO BRITISH THERMAL UNIT %f", user2, user2 / 778.169);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 9)
            {
                printf("ENTER THE ENERGY IN FOOT-POUND :-");
                scanf("%f", &user2);
                system("cls");
                printf("CHECK THE VALUE YOU HAVE ENTERED %f IN FOOT-POUND", user2);
                getch();
                system("cls");
                printf("YOU HAVE ENTERED %f IN FOOT-POUND AND IT IS CONVERTED INTO US THERM  %f", user2, user2 * 7.78e+7);
                printf("\n\t\t\t\tTHANK YOU");
                getch();
                main();
            }
            else if (converter == 10 && converter1 == 99)
            {
                printf("\a");
                goto back5;
            }
            else
            {
                printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
                getch();
                system("cls");
                goto back5;
            }
        }
        break;
        case 99:
        {
            printf("\a");
            goto back0;
        }
        default:
        {
            printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
            getch();
            system("cls");
            goto back0;
        }
        }
    }
    break; // ENERGY
    case 99:
    {
        exit1();
    }
    break;

    default: // main switch
    {

        printf("\t\t\t\tINVALID INPUT \n\t\t\t\t TRY AGAIN\a");
        getch();
        system("cls");
        main();
    }
    }
    }
    return 0;
}

void exit1()
{
    long int i;
    printf("OUR NEW UPDATE WILL BE COMING SOON FOR THAT STAY TUNE STAY CONNECTED AND\nTHIS SOFTWARE IS AVAIABLE FOR ANDROID PHONE.\n");
    printf("EXITING");

    for (i = 0; i <= 8; i++)
    {
        delay();
        printf(". ");
    }
    system("cls");
    printf("\n\t\t\t\t THANK YOU\n ");
}
int delay()
{
    long double a;

    for (a = 0; a < 100000000; a++)
        ;
}