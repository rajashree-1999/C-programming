#include<stdio.h>
int main()
{
    int n,p,i,arr[50];
    long long power=1;
    printf("\n\tEnter any number : ");
    scanf("%d",&n);
    printf("\n\tEnter power : ");
    scanf("%d",&p);

    for(i=1;i<=n;i++)
    {
        power = n*p;
        printf("\n\tpower=%d",power);
    }
    }
