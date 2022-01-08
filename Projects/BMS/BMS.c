#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void exit1();
int back1();
int delay();
void empcreate();
int emplogin();
int logout();
void exit1(void);
int mainmenu();
 void getch();
int main();
int customer_new_account();
int accountlist();
struct account
{
int accountnumber[20];
char todaydate[30];
char customername[30];
char address[50];
char postalcode[10];
char birthdate[30];
char age[30];
char phoneno[10];


}ac1;
struct empaccountcreat
{
    char emp_name[20],emp_id[20],emp_add[30],emp_dob[15],bank_manager_pass[8];//create a/c detail emp
    char emp_userid[8],emp_userpass[8],emp_userpassre[8];//create user id and pass

}empacc1,log1;
struct empaccountlog
{
    char user_emp_id[8],user_pass[8],user_emp_name[10];

}emplog1;
int delay()
        {
            long double a;

            for(a=0;a<10000000;a++);
        }
void empcreate()
{
    FILE *empdata,*empidpass;//files
    char bank_manager1[8]="FORTUNE";//PASSWORD OF BANK MANAGER
     empdata=fopen("C:\\ProgramData\\Empdata.txt", "a+");
      empidpass=fopen("C:\\ProgramData\\Empidpass.txt", "a+");
         if (empdata==NULL&&empidpass==NULL)
         {
             printf("\n\t\t\t\n\n\t THE FILE DOES NOT EXIST ");
         }//if null
         else
         {
              system("cls");
             printf("\n\t\t\t   BANK MANAGEMENT SYSTEM");
             printf("\n\t\t\t\n\n\tENTER NAME OF EMPLOY :- ");
             fflush(stdin);
             gets(empacc1.emp_name);
             printf("\n\t\t\t\n\n\tENTER EMPLOY CODE :- ");
             fflush(stdin);
             gets(empacc1.emp_id);
             printf("\n\t\t\t\n\n\tENTER ADDRESS OF EMPLOY :- ");
             fflush(stdin);
             gets(empacc1.emp_add);
             printf("\n\t\t\t\n\n\tENTER DATE OF BIRTH OF EMPLOY (DD/MM/YYYY):- ");
             fflush(stdin);
             gets(empacc1.emp_dob);
             passrem:printf("\n\t\t\t\n\n\tENTER BANK MANAGER PASSWORD :- ");
             fflush(stdin);
             gets(empacc1.bank_manager_pass);
             if (strcmp(empacc1.bank_manager_pass,bank_manager1)==0)
             {
                 system("cls");
                 printf("\n\t\t\t   BANK MANAGEMENT SYSTEM");
                 printf("\n\t\t\t\n\n\tCREATE A NEW USER NAME :-");
                 fflush(stdin);
                 gets(empacc1.emp_userid);
                passdid: printf("\n\t\t\t\n\n\tCREATE A PASSWORD :-");
                 fflush(stdin);
                 gets(empacc1.emp_userpass);
                 printf("\n\t\t\t\n\n\tRETYPE THE PASSWORD :-");
                 fflush(stdin);
                 gets(empacc1.emp_userpassre);
                 if(strcmp(empacc1.emp_userpass,empacc1.emp_userpassre)==0)
                 {
                 fprintf(empdata,"%s\t\t%s\t\t%s\t\t%s\t\t\n\n",empacc1.emp_name,empacc1.emp_id,empacc1.emp_add,empacc1.emp_dob);
                 fprintf(empidpass,"%s\t\t%s\t\t%s\n",empacc1.emp_name,empacc1.emp_userid,empacc1.emp_userpass);
                 printf("\n\t\t\t\n\n\tDATA SAVING"); long int i;
                 for(i=0;i<=6;i++)
                 {
                   delay();
                   printf(". ");

                 }
                 printf("\n\t\t\t\n\n\tDATA SAVED");
                 for(i=0;i<=6;i++)
                 {
                   delay();
                   printf(". ");

                 }
                 fclose(empdata);
                 fclose(empidpass);
                 back1();

                 }//saving data
                 else
                 {
                     printf("\n\t\t\t\n\n\tPASSWORD DID NOT MATCH");
                     getch();
                     goto passdid;
                 }//saving data else
             }//bank PASS MANAGER if
             else
             {
                 system("cls");
                 printf("\n\t\t\t\n\n\t!!!!!BANK MANAGER PASSWORD IS WRONG!!!!! ");
                 goto passrem;
             }//bank PASS MANAGER else
         }//data enter


}//a/c create employ
int emplogin()
{
    FILE *empidpass;


    long int i;
    system("cls");
    empidpass=fopen("C:\\ProgramData\\Empidpass.txt","a++");
    printf("\n\n\n\t\t\t   BANK MANAGEMENT SYSTEM");
    printf("\n\n\n\n\t\tENTER USER ID :-");
    fflush(stdin);
    gets(emplog1.user_emp_id);
    printf("\n\n\n\n\t\tENTER PASSWORD :-");
    fflush(stdin);
    gets(emplog1.user_pass);
    printf("\n\n\n\n\t\tENTER NAME :-");
    fflush(stdin);
    gets(emplog1.user_emp_name);
     while(fscanf(empidpass,"%s\t\t%s\t\t%s\n",&log1.emp_name,&log1.emp_userid,&log1.emp_userpass)!=-1)
     {
         if(strcmp(emplog1.user_emp_id,log1.emp_userid)==0)
         {
             system("cls");
             printf("\n\n\n\t\t\t   BANK MANAGEMENT SYSTEM");
         	printf("\n\n\n\n\t\tMATCHING USER ID");
         	for(i=0;i<=10;i++)
                 {
                   delay();
                   printf(". ");

                 }
                 printf("\n\n\n\n\t\tMATCH FOUND");
                 for(i=0;i<=10;i++)
                 {
                   delay();
                   printf("! ");

                 }

                printf("\n");
             if (strcmp(emplog1.user_pass,log1.emp_userpass)==0)
             {
                 printf("\n\n\n\n\t\tMATCHING PASSWORD");
                 for(i=0;i<=10;i++)
                 {
                   delay();
                   printf(". ");

                 }
                 printf("\n\n\n\n\t\tMATCH FOUND");
                 for(i=0;i<=10;i++)
                 {
                   delay();
                   printf("! ");

                 }
             	mainmenu();
			 }
			 else
             {
                 printf("\n\n\n\n\t\tMATCHING PASSWORD");
                 for(i=0;i<=10;i++)
                 {
                   delay();
                   delay();
                   printf(". ");

                 }
                 printf("\n\n\n\n\t\tMATCH NOT FOUND");
                 for(i=0;i<=10;i++)
                 {
                   delay();
                   delay();
                   printf("! ");

                 }

                 emplogin();
             }

         }
         else
         {
             printf("\n\n\n\n\t\tMATCHING USER ID");
         	for(i=0;i<=10;i++)
                 {
                   delay();
                   delay();
                   printf(". ");

                 }
                 printf("\n\n\n\n\t\tMATCH NOT FOUND");
                 for(i=0;i<=10;i++)
                 {
                   delay();
                   delay();
                   printf("! ");

                 }
                 emplogin();
         }
     }

}
int accountlist()
{
    FILE *accountsee;
    accountsee=fopen("C:\\ProgramData\\customer_account_detail.txt","r");
    int test=0;
    system("cls");
    printf("\nACCOUNT.NO\tDATE\tNAME\tADDRES\tPOSTAL\tBIRTHDATE\tAGE\tNUMBER\n");
    while(fscanf(accountsee,"\n%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&ac1.accountnumber,&ac1.todaydate,&ac1.customername,&ac1.address,&ac1.postalcode,&ac1.birthdate,&ac1.age,&ac1.phoneno)!=EOF)
    {
           printf("\n%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",ac1.accountnumber,ac1.todaydate,ac1.customername,ac1.address,ac1.postalcode,ac1.birthdate,ac1.age,ac1.phoneno);
           test++;
    }
    fclose(accountsee);
    if (test==0)
        {   system("cls");
            printf("\nNO RECORDS!!\n");}

    int back00;
    view_list_invalid:printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&back00);
        system("cls");
        if (back00==1)
            mainmenu();
        else if(back00==0)
            exit1();
        else
        {
            printf("\nInvalid!\a");
            goto view_list_invalid;
        }

}

int back1()
{

    int i;
    back2:system("cls");
     printf("\n\n\n\t\t\t   BANK MANAGEMENT SYSTEM");
        printf("\n\n\n\n\t\tENTER 1 FOR MAIN MENU AND 0 FOR EXIT\n");
    printf("\n\n\n\n\t\tENTER :-");
    scanf("%d",&i);
    if (i==1)
    {
         main();
    }
    else if (i==0)
    {
        exit1();
    }
    else
    {
         printf("\n\n\n\n\n\t\t\t     !!!!!! INVALID INPUT !!!!!!");
         getch();
         goto back2;
    }
}

void exit1(void)
{

    printf("\n\n\n\t\t\t   !!!!!!THANK YOU!!!!!!");

}
 int mainmenu()
 {
     system("cls");
     int choose1;
    puts("\n\t\t\t   BANK MANAGEMENT SYSTEM");
    printf("\n\t\tENTER");
    printf("\n\n\t\t1) FOR CREATE NEW ACCOUNT OF CUSTOMER");
    printf("\n\n\t\t2) FOR CHECK DETAILS OF CUSTOMER EXISTING ACCOUNT");
    printf("\n\n\t\t3) FOR UPDATE INFORMATION OF CUSTOMER EXISTING ACCOUNT");
    printf("\n\n\t\t4) FOR REMOVE CUSTOMER EXISTING ACCOUNT");
    printf("\n\n\t\t5) FOR MONEY TRANSACTIONS");
    printf("\n\n\t\t6) FOR LIST OF CUSTOMER");
    printf("\n\n\t\t7) FOR LOGOUT");
    printf("\n\n\t\t8) FOR LOGOUT AND EXIT");
    printf("\n\n\t\tCHOOSE THE NUMBER :- ");
    scanf("%d",&choose1);
    switch (choose1)
    {
    case 1:
        {
          customer_new_account();
        }
        break;
        case 2:
        {

        }
        break;
        case 3:
        {

        }
        break;
        case 4:
        {

        }
        break;
        case 5:
        {

        }
        break;
        case 6:
        {
            accountlist();
        }
        break;
        case 7:
        {
            logout();
        }
        break;
        case 8:
        {
            exit1();
        }
        break;
        default:
        {
            printf("\n\n\n\n\n\t\t\t     !!!!!! INVALID INPUT !!!!!!");
            getch();
            mainmenu();
        }
    }//switch
 }
 int logout()
 {
      printf("\n\t\t\t\n\n\tREDIRECTING TO MAIN PAGE "); long int i;
                 for(i=0;i<=10;i++)
                 {
                   delay();
                   printf(". ");

                 }
                 main();
 }
 int customer_new_account()
 {
     int choose,accountnum;

     FILE *customernew;
      customernew=fopen("C:\\ProgramData\\customer_account_detail.txt","a+");
     account_no: system("cls");
    printf("\n\t\t\t   BANK MANAGEMENT SYSTEM");
    printf("\n\t\t\t\n\n\tCREATE NEW ACCOUNT NUMBER:- ");
    scanf("%d",&ac1.accountnumber);
             printf("\n\t\t\t\n\n\tENTER TODAYS DATE (DD/MM/YYYY):- ");
             fflush(stdin);
             gets(ac1.todaydate);
             printf("\n");
             fflush(stdin);
             printf("\n\t\t\t\n\n\tENTER NAME OF CUSTOMER:- ");
             fflush(stdin);
             gets(ac1.customername);
             printf("\n");
             fflush(stdin);
             printf("\n\t\t\t\n\n\tENTER ADDRESS OF CUSTOMER:- ");
             fflush(stdin);
             gets(ac1.address);
             printf("\n");
             fflush(stdin);
             system("cls");
             printf("\n\t\t\t   BANK MANAGEMENT SYSTEM");
             printf("\n\t\t\t\n\n\tENTER POSTALCODE:- ");
             fflush(stdin);
             gets(ac1.postalcode);
             printf("\n");
             fflush(stdin);
              printf("\n\t\t\t\n\n\tENTER DATE OF BIRTH OF CUSTOMER (DD/MM/YYYY):- ");
             fflush(stdin);
             gets(ac1.birthdate);
             printf("\n");
             fflush(stdin);
             printf("\n\t\t\t\n\n\tENTER AGE OF CUSTOMER:- ");
             fflush(stdin);
             gets(ac1.age);
             printf("\n");
             fflush(stdin);
             printf("\n\t\t\t\n\n\tENTER PHONE NUMBER OF CUSTOMER:- ");
             fflush(stdin);
             gets(ac1.phoneno);
             printf("\n");
             fflush(stdin);
             system("cls");
             printf("\n\t\t\t   BANK MANAGEMENT SYSTEM\n");
             int yes = 1,choss1,no = 2,check1 = 0;
             yesno:puts("YOU WANT TO SAVE THE DATA (1 FOR YES AND 2 FOR NO AND 0 CHECK THE DATA):- ");
             scanf("%d",&choss1);
             if (choss1==yes)
             {
              saving1:fprintf(customernew,"\n%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&ac1.accountnumber,&ac1.todaydate,&ac1.customername,&ac1.address,&ac1.postalcode,&ac1.birthdate,&ac1.age,&ac1.phoneno);
                 printf("\n\t\t\t\n\n\tDATA SAVING"); long int i;
                 for(i=0;i<=9;i++)
                 {
                   delay();
                   printf(". ");

                 }
                 printf("\n\t\t\t\n\n\tDATA SAVED");
                 for(i=0;i<=9;i++)
                 {
                   delay();
                   printf(". ");

                 }
                 fclose(customernew);
                 mainmenu();

             }
             else if (choss1==no)
             {
                 printf("\n\t\t\t\n\n\tTHE DATA IS NOT SAVED ");
                 printf("\n\t\t\t\n\n\tRE-ENTER THE DATA ");
                 long int i;
                 for(i=0;i<=10;i++)
                 {
                   delay();
                   printf(". ");

                 }
                 customer_new_account();
             }
             else if (choss1==check1)
             {
                 system("cls");
             printf("\n\t\t\t   BANK MANAGEMENT SYSTEM");
             printf("\n\t\t\t\n\n\t TODAYS DATE (DD/MM/YYYY):- ");
             fflush(stdin);
             puts(ac1.todaydate);
             printf("\n\t\t\t\n\n\t NAME OF CUSTOMER:- ");
             fflush(stdin);
             puts(ac1.customername);
             printf("\n\t\t\t\n\n\t ADDRESS OF CUSTOMER:- ");
             fflush(stdin);
             puts(ac1.address);
             printf("PRESS ANY  KEY TO CONTINUE");
             long int i;
                 for(i=0;i<=6;i++)
                 {
                   delay();
                   printf(". ");

                 }
                 getch();
             system("cls");
             printf("\n\t\t\t   BANK MANAGEMENT SYSTEM");
             printf("\n\t\t\t\n\n\t POSTALCODE:- ");
             fflush(stdin);
             puts(ac1.postalcode);
              printf("\n\t\t\t\n\n\t DATE OF BIRTH OF CUSTOMER (DD/MM/YYYY):- ");
             fflush(stdin);
             puts(ac1.birthdate);
             printf("\n\t\t\t\n\n\t AGE OF CUSTOMER:- ");
             fflush(stdin);
             puts(ac1.age);
             printf("\n\t\t\t\n\n\t PHONE NUMBER OF CUSTOMER:- ");
             fflush(stdin);
             puts(ac1.phoneno);
             getch();
             int key=1,retype=2,user;
             printf("PRESS 1  KEY TO SAVE THE DATA AND 2 TO RE-TYPE THE DATA");
             scanf("%d",&user);
             if (user==key){
                 for(i=0;i<=6;i++)
                 {
                   delay();
                   printf(". ");

                 }
             goto saving1;
             }
             else if (user==retype)
             {
                 customer_new_account();
             }
             else
             {
               printf("\n\n\n\n\n\t\t\t     !!!!!! INVALID INPUT !!!!!!");
                 getch();
                 goto yesno;

             }
             }
             else
             {
                 printf("\n\n\n\n\n\t\t\t     !!!!!! INVALID INPUT !!!!!!");
                 getch();
                 goto yesno;

             }


 }

int main()
{

     backmain:system("cls");
    int emp;
    printf("\n\n\n\t\t\t   BANK MANAGEMENT SYSTEM");
    printf("\n\n\n\t\tENTER");
    printf("\n\n\n\n\t\t1) FOR CREATE NEW EMPLOYEE USER ID");
    printf("\n\n\n\n\t\t2) FOR LOGIN EXISTING EMPLOYEE USER ID");
    printf("\n\n\n\n\t\tCHOOSE THE NUMBER :-");
    scanf("%d",&emp);
    if(emp==1)
    {
      empcreate();
    }//if
    else if (emp==2)
    {
      emplogin();
    }//else if
    else
    {
         printf("\n\n\n\n\n\t\t\t     !!!!!! INVALID INPUT !!!!!!");
         getch();
         goto backmain;
    }//else

    return 0;
}

