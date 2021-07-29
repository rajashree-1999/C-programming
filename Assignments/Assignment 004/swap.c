#include<stdio.h>
int main()
{
    int a=20,b=45;

    printf("\n\n\t\tSwiping of two number\n\t\t------------------------");
    printf("\n\n\t\t Before swiping\n\t\t------------");
    printf("\n\t\t First Number :%d",a);
    printf("\t Second number :%d",b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("\n\n\n\t\t After swiping\n\t\t------------");
    printf("\n\t\t First Number :%d",a);
    printf("\t Second Number :%d\n\n\n",b);

    return 0;
}
