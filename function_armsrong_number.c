#include <stdio.h>

int countDigits(int);
int calculatePower(int, int);
int isArmstrong(int);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
    {
        printf("%d is an Armstrong number", number);
    }
    else
    {
        printf("%d is not an Armstrong number", number);
    }

    return 0;
}

int countDigits(int number)
{
    int count = 0;

    if (number == 0)
    {
        return 1;
    }

    while (number != 0)
    {
        number = number / 10;
        count++;
    }

    return count;
}

int calculatePower(int digit, int power)
{
    int result = 1;
    int i;

    for (i = 1; i <= power; i++)
    {
        result = result * digit;
    }

    return result;
}

int isArmstrong(int number)
{
    int originalNumber = number;
    int sum = 0;
    int digits;
    int remainder;

    if (number < 0)
    {
        return 0;
    }

    digits = countDigits(number);

    while (number != 0)
    {
        remainder = number % 10;

        sum = sum + calculatePower(remainder, digits);

        number = number / 10;
    }

    return originalNumber == sum;
}