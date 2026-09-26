#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,root1,root2;
    printf("Enter a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);

    root1=(-b+d)/(2*a);
    root2=(-b-d)/(2*a);

    printf("Root1=%f\n",root1);
    printf("Root2=%f\n",root2);

    return 0;
}
