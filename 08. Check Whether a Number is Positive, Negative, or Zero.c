#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);

    if(number>0)
         printf("Positive Number");

    else if(number<0)
         printf("Negative Number");

    else
         printf("Zero");

    return 0;
}

