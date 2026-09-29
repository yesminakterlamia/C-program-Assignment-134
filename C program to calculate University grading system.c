#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number to check grade:");
    scanf("%d",&num);

    if(num<0 || num>100)
    {
       printf("Wrong Number");
    }
    else if(num>=0 && num<40)
    {
        printf("Fail");
    }
    else if(num>=40 && num<45)
    {
        printf("D Grade");
    }
    else if(num>=45 && num<50)
    {
        printf("C Grade");
    }
    else if(num>=50 && num<55)
    {
        printf("C+ Grade");
    }
    else if(num>=55 && num<60)
    {
        printf("B- Grade");
    }
    else if(num>=60 && num<65)
    {
        printf("B Grade");
    }
    else if(num>=65 && num<70)
    {
        printf("B+ Grade");
    }
    else if(num>=70 && num<75)
    {
        printf("A- Grade");
    }
    else if(num>=75 && num<80)
    {
        printf("A Grade");
    }
    else
    {
        printf("A+ Grade");
    }

    return 0;
}
