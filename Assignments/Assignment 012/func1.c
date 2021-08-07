//WAP to display your name using name() function.
#include<stdio.h>
void name();
int main()
{
    name();
    printf("\n\n\n\nSuccessfully Executed....");
    return 0;
}
void name()
{
    char name[20];
    printf("\n\n\t\t\t\t\tDisplay your name using function\n\t\t\t\t\t__________________________________");
    printf("\n\n\t\t\t\t\t        ");
    scanf("%s",&name);
    printf("\n\t\t\t\t\t__________________________________");
}
