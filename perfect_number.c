#include <stdio.h>
int main()
{
    int num, i;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is not a perfect number", num);
    }

    return 0;
}