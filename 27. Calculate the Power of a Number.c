#include<stdio.h>
#include<math.h>
int main()
{
    int base,power,result;

    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the power:");
    scanf("%d",&power);

    result=pow(base,power);
    printf("Result=%d",result);

    return 0;
}
