#include <stdio.h>

int main()
{
    int start, end, num, i, count;

    printf("Enter two intervals: ");
    scanf("%d%d", &start, &end);

    printf("Prime numbers are: ");

    for(num = start; num <= end; num++)
    {
        count = 0;

        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
