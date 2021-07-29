//WAP to check whether a number is positive,negative or zero using switch case
#include<stdio.h>
int main()
{
    int n;
    printf("\n\n\tEnter any number : ");
    scanf("%d",&n);

    switch(n>0)
    {
     case 0:
            switch(n<0)
            {
            case 0:
                   printf("\n\tThe given number is zero");
                   break;
            case 1:
                   printf("\n\tThe given number is negative");
                   break;
            default:
                    printf("\n\tError");
            }
            break;
     case 1:
            printf("\n\tThe given number is positive");
            break;
     default:
             printf("\n\tError");
             break;
    }
    printf("\n\n\nSuccessfully Executed...");
    return 0;
}
