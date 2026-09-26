#include<stdio.h>
int main()
{
    int start,end,num,temp,r,sum;

    printf("Enter two intervals:");
    scanf("%d%d",&start,&end);

    printf("Armstrong numbers are:");

    for(num=start;num<=end;num++)
    {
        temp=num;
        sum=0;

        while(temp!=0)
        {
            r=temp%10;
            sum=sum+(r*r*r);
            temp=temp/10;
        }
        if(sum==num)
        {
            printf("%d ",num);
        }
    }
    return 0;
}
