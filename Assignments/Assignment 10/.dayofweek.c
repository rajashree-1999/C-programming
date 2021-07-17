//WAP to print day of week name using switch case
#include<stdio.h>
int main()
{
    int n;
    printf("\n\n\tDAY OF WEEK\n\t_______________________________________________________");
    printf("\n\tEnter day of week : ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
               printf("\tToday is Monday");
               break;
        case 2:
               printf("\tToday is Tuesday");
               break;
        case 3:
               printf("\tToday is Wednesday");
               break;
        case 4:
               printf("\tToday is Thursday");
               break;
        case 5:
               printf("\tToday is Friday");
               break;
        case 6:
               printf("\tToday is Saturday");
               break;
        case 7:
               printf("\tToday is Sunday");
               break;
        default:
                printf("\tError");
                break;
    }
    printf("\n\n\n");
    return 0;
}
