//Leap year
#include<stdio.h>
int main()
{
    int year;
    printf("\n\n\tEnter year : ");
    scanf("%d",&year);

    if( year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
     printf("\n\tLeap year");
    else
     printf("\n\tNot a Leap year");

    printf("\n\n\tSuccessfully Executed...");
    return 0;

}
