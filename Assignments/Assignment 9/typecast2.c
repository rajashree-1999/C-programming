//WAP to multiply 2 float numbers and display its result in integer data type
#include<stdio.h>
int main()
{
    float a,b;
    int result;
    printf("\n\n\tMULTIPLICATION\n\t_________________________________________________________________________\n\n\tEnter two float numbers : ");
    scanf("%f%f",&a,&b);

    result=a*b;
    printf("\n\tMultiplication of two numbers : %d",result);
    printf("\n\n\n\n\tSuccessfully Executed...");
    return 0;
    }
