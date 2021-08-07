//WAP to display the cube of the numbers up to given integer
#include<stdio.h>
int main()
{
    int n,result;
    printf("\n\n\tEnter an integer upto which cube will be performed: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
        {
            result=i*i*i;
            printf("\n\tCube of %d= %d",i,result);
            i++;
        }
        printf("\n\n\n\nSuccessfully Executed...");
        return 0;
    }


