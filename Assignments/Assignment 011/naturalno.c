//WAP to find the sum of first 10 natural numbers
#include<stdio.h>
int main()
{
    int i,sum=0;

    printf("\n\n\tSUM OF FIRST 10 NATURAL NUMBERS\n\t_______________________________");
    for(i=1;i<=10;i++)
    {
        printf("\n\t %d",i);
        sum=i+sum;
    }
    printf("\n\t_______________________________\n\tSUM: %d",sum);
    printf("\n\t_______________________________");
    printf("\n\n\n\n\n\nSuccessfully Executed...");
    return 0;
}
