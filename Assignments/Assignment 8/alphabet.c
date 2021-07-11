//Alphabet
#include<stdio.h>
int main()
{
    char alpha;
    printf("\n\n\tEnter alphabet : ");
    scanf("%c",&alpha);

    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
     printf("\n\n\tThe given alphabet is a vowel");
    else
     printf("\n\n\tThe given alphabet is a consonant");


    printf("\n\n\tSuccessfully Executed...");
    return 0;
}
