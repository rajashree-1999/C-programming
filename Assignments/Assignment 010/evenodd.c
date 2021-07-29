//WAP to check whether a number is even or odd using switch case.
#include<stdio.h>
int main()
{
    int n;
    printf("\n\n\tEVEN OR ODD\n\t________________________\n\tEnter any number : ");
    scanf("%d",&n);

    switch(n%2)
    {
     case 0:
            printf("\n\tThe given number is even");
            break;
     case 1:
            printf("\n\tThe given number is odd");
            break;
     default:
             printf("\n\n\tError");
    }
    printf("\n\n\nSuccessfully Executed...");
    return 0;
}
