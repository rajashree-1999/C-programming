//Calculator
#include<stdio.h>
int main()
{   int n,a,b,e,i,sum,sub,mul,div,rem,pow=1;

    printf("\n\n\n\t\t\t\t -------WELCOME TO MY PROJECT-------\n\t\t_______________________________________________________________________");
    printf("\n\t\t|_____________________________________________________________________|");
    printf("\n\t\t|                                                                     |");
    printf("\n\t\t|                                                                     |");
    printf("\n\t\t|\t      Calculate\t:     1.Addition\t\t\t      |");
    printf("\n\t\t|\t                      2.Subtraction\t\t\t      |");
    printf("\n\t\t|\t                      3.Multiplication\t\t\t      |");
    printf("\n\t\t|\t                      4.Division\t\t\t      |");
    printf("\n\t\t|\t                      5.Remainder\t\t\t      |");
    printf("\n\t\t|\t                      6.Power\t\t\t\t      |");
    printf("\n\t\t|                                                                     |");
    printf("\n\t\t|         Select any number to perform respective operation\t      |");
    printf("\n\t\t|                                                                     |");
    printf("\n\t\t|                                                                     |");
    printf("\n\t\t|\t--------------------@@@@@@@@@@@@----------------------        |");
    printf("\n\t\t|                                                                     |");
    printf("\n\t\t\t  Enter selected number : ");
    scanf("%d",&n);
    printf("\t\t|                                                                     |");

    switch(n)
    {
    case 1:
           printf("\n\t\t\t  Enter two numbers : ");
           scanf("%d%d",&a,&b);
           printf("\t\t|                                                                     |");
           sum=a+b;
           printf("\n\t\t\t  Result : %d",sum);
           break;
    case 2:
           printf("\n\t\t\t  Enter two numbers : ");
           scanf("%d%d",&a,&b);
           printf("\t\t|                                                                     |");
           sub=a-b;
           printf("\n\t\t\t  Result : %d",sub);
           break;
    case 3:printf("\n\t\t\t  Enter two numbers : ");
           scanf("%d%d",&a,&b);
           printf("\t\t|                                                                     |");
           mul=a*b;
           printf("\n\t\t\t  Result : %d",mul);
           break;
    case 4:printf("\n\t\t\t  Enter two numbers : ");
           scanf("%d%d",&a,&b);
           printf("\t\t|                                                                     |");
           div=a/b;
           printf("\n\t\t\t  Result : %d",div);
           break;
    case 5:printf("\n\t\t\t  Enter two numbers : ");
           scanf("%d%d",&a,&b);
           printf("\t\t|                                                                     |");
           rem=a%b;
           printf("\n\t\t\t  Result : %d",rem);
           break;
    case 6:printf("\n\t\t\t  Enter base : ");
           scanf("%d",&b);
           printf("\t\t|                                                                     |");
           printf("\n\t\t\t  Enter exponent : ");
           scanf("%d",&e);
           printf("\t\t|                                                                     |");
           for(i=1;i<=e;i++)
           {
             pow=b*pow;
           }
           printf("\n\t\t\t  Result : %d",pow);
           break;}
    printf("\n\t\t|                                                                     |");
    printf("\n\t\t|_____________________________________________________________________|");
    printf("\n\t\t|_____________________________________________________________________|");
    printf("\n\n\n\n\n\nSuccessfully Executed..");
    return 0;}
