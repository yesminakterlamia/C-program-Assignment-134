#include<stdio.h>
int main()
{
    int n1,n2,a,b,temp,gcd,lcm;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    a=n1;
    b=n2;
    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    gcd=a;
    lcm=(n1*n2)/gcd;
    printf("LCM:%d",lcm);
    return 0;
}

