#include<stdio.h>
int main()
{
    char phno[20];
    int RegdNo;
    char nm1[20],nm2[20],address[30],email[35];


    printf("\n\t\tEnter Student Details:\n");
    printf("\t\t----------------------\n");
    printf("\n\tEnter Student Name      : ");
    scanf("%s%s",&nm1,&nm2);
    printf("\n\tEnter Student Regd. No  : ");
    scanf("%d",&RegdNo);
    printf("\n\tEnter Student E-mail ID : ");
    scanf("%s",email);
    printf("\n\tEnter Student Phone No. : ");
    scanf("%s",&phno);
    printf("\n\tEnter Student Address   : ");
    scanf("%s",address);

    printf("\n\n\t\tStudent Details:");
    printf("\n\t\t----------------");
    printf("\n\tStudent Name      : %s %s",nm1,nm2);
    printf("\n\tStudent Regd.No   : %d",RegdNo);
    printf("\n\tStudent E-mail ID : %s",email);
    printf("\n\tStudent Phone no. : %s ",phno);
    printf("\n\tStudent Address   : %s",address);

    printf("\n\n\tSuccessfully Executed........");
}
