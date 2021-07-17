//WAP to find maximum number between two number using switch case
#include<stdio.h>
int main()
{
    int a,b;
    printf("\n\n\tMAX OF  TWO NUMBERS\n\t_________________________________________\n\tEnter value of a : ");
    scanf("%d",&a);
    printf("\tEnter value of b : ");
    scanf("%d",&b);

    switch(a>b)
    {
        case 0:
               printf("\n\t b is greater than a");
               break;
        case 1:
               printf("\n\t a is greater than b");
               break;
        default:
                printf("\n\tError");
                break;
    }

    printf("\n\n\n");
    return 0;
}
