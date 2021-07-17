//WAP to print day of week name using switch case
#include<stdio.h>
int main()
{
    int day=6;

    switch(6)
    {
        case 1:
               printf("\n\n\tToday is Monday");
               break;
        case 2:
               printf("\n\n\tToday is Tuesday");
               break;
        case 3:
               printf("\n\n\tToday is Wednesday");
               break;
        case 4:
               printf("\n\n\tToday is Thursday");
               break;
        case 5:
               printf("\n\n\tToday is Friday");
               break;
        case 6:
               printf("\n\n\tToday is Saturday");
               break;
        case 7:
               printf("\n\n\tToday is Sunday");
               break;
        default:
                printf("Error");
                break;
    }
    return 0;
}
