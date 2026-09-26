#include<stdio.h>
int main()
{
    int n1,n2,a,b,temp,gcd;
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
    printf("GCD:%d",gcd);
    return 0;
}
