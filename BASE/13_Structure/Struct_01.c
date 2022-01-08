#include <stdio.h>
struct EMP_OFFICE
{
    int id;
    char user;
    int sal;
} O1, O2;

struct EMP_PERSONAL
{
    int room_no;
    int addres;
    int pincode;
};
struct EMP_DATA
{
    int d1;
    int d2;
    int d3;
};

struct EMP_PERSONAL P1, P2;
void main()
{
    struct EMP_DATA D1, D2;
    // Data In Office
    printf("Data In Office\n\n");
    O1.id = 01;
    O1.user = 'A';
    O1.sal = 01;

    O2.id = 02;
    O2.user = 'B';
    O2.sal = 02;

    printf("Office 01 Data \nID-%d\nUSER-%c\nSal-%d\n\n", O1.id, O1.user, O1.sal);
    printf("Office 02 Data \nID-%d\nUSER-%c\nSal-%d\n", O2.id, O2.user, O2.sal);
    // printf();
    printf("\nData In Office\n");

    // Data In PERSONAL
    printf(" \n\nData In PERSONAL\n\n");
    P1.room_no = 10;
    P1.addres = 100;
    P1.pincode = 1000;

    P2.room_no = 20;
    P2.addres = 200;
    P2.pincode = 2000;

    printf("PERSONAL 01 Data \nROOM-%d\nAddres-%d\npincode-%d\n\n", P1.room_no, P1.addres, P1.pincode);
    printf("PERSONAL 02 Data \nROOM-%d\nAddres-%d\npincode-%d\n\n", P2.room_no, P2.addres, P2.pincode);
    // printf();
    printf("\nData In PERSONAL\n");

    // Data In DATA
    printf(" \n\nData In DATA\n\n");
    D1.d1 = 123;
    D1.d2 = 456;
    D1.d3 = 789;

    D2.d1 = 321;
    D2.d2 = 654;
    D2.d3 = 987;

    printf("DATA D1 Data \nd1-%d\nd2-%d\nd3-%d\n\n", D1.d1,D1.d2,D1.d3);
    printf("DATA D2 Data \nd1-%d\nd2-%d\nd3-%d\n\n", D2.d1,D2.d2,D2.d3);
    printf("\nData In DATA\n");
}