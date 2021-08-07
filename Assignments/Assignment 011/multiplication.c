//WAP to display the multiplication table of a given number
#include<stdio.h>
int main()
{
    int n,mul;
    printf("\n\n\tMULTIPLICATION TABLE\n\t________________________________________\n\tEnter an integer: ");
    scanf("%d",&n);
    int i=1;
    while(i<=10)
        {
            mul=n*i;
            printf("\n\t %d*%d= %d",n,i,mul);
            i++;
        }
        printf("\n\n\n\n\nSuccessfully Executed...");
        return 0;
    }
