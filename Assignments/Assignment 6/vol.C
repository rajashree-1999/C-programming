//WAP to find the volume of Rectangle
#include<stdio.h>
int main()
{
    int l,w,h,Vol=0;
    printf("\n\tVolume of Rectangle \n\t-------------------\n\tEnter the value of length,width and height = ");
    scanf("%d%d%d",&l,&w,&h);

    Vol=l*w*h;
    printf("\n\tVolume of Rectangle = %d",Vol);
    printf("\n\n\tSuccessfully Executed...\n");
    return 0;
}
