//WAP to display n terms of natural number and their sum
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("\n\n\tEnter n terms : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       printf("\n\ti= %d",i);
       sum=i+sum;}
       printf("\n\tSUM= %d",sum);

}
