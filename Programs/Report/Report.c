#include <stdio.h>
#include <stdlib.h>

int main()
{
    int english,history,science,maths,hindi,bk,total;
    float persentage;
    printf("ENTER YOUR ENGLISH MARKS :- \t\t");
    scanf("%d",&english);
    printf("ENTER YOUR HISTORY MARKS :- \t\t");
    scanf("%d",&history);
    printf("ENTER YOUR SCIENCE MARKS :- \t\t");
    scanf("%d",&science);
    printf("ENTER YOUR MATHS MARKS :- \t\t");
    scanf("%d",&maths);
    printf("ENTER YOUR HINDI MARKS :- \t\t");
    scanf("%d",&hindi);
    printf("ENTER YOUR BOOKING KEEPING MARKS :- \t");
    scanf("%d",&bk);
    printf("================================================================================");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t        REPORT CARD\n");
    printf("================================================================================\n");
    printf("ENGLISH       HISTORY          SCIENCE       MATHS       HINDI      BOOK KEEPING\n");
    printf("  %d            %d               %d           %d          %d            %d\n",english,history,science,maths,hindi,bk);
    total=english+history+science+maths+hindi+bk;
    printf("TOTAL = %d\n",total);
    persentage=total*100/600;
    printf("PERSENTAGE = %f",persentage);




    return 0;
}
