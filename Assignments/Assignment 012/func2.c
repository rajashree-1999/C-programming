//WAP to add two numbers using add()function.
#include<stdio.h>
int add();
int main()
{
    add();
    printf("\n\n\n\nSuccessfully Executed...");
    return 0;
}
int add()
{
        int a,b;
        printf("\n\n\tAdd 2 numbers using function\n\t______________________________");
        printf("\n\n\tEnter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("\n\tSUM: %d",a+b);
        printf("\n\t______________________________");
}
