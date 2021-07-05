// WAP to find the area of Rectangle
#include<stdio.h>
int main()
{
    int l,b,Area=0;
    printf("\n\tAREA OF RECTANGLE \n\t-----------------\n\n\tEnter the value of length and breadth : ");
    scanf("%d%d",&l,&b);

    Area=l*b;
    printf("\n\tArea of Rectangle= %d",Area);
    printf("\n\n\tSuccessfully Executed...\n");
    return 0;
}
