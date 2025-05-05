#include <stdio.h>

int main()
{

    int num, remainder, sum, temp;

    // accept the number
    printf("Enter the number:\n");
    scanf("%d", &num);

    // initially sum is 0
    sum = 0;
    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + remainder;
        temp = temp / 10;
    }
    printf("The sum of digits are %d\n", sum); // 10

    int sum1 = 0;
    temp = num;
    // reversed number
    while (temp != 0)
    {
        remainder = temp % 10; //digit 123
        sum1 = sum1 * 10 + remainder;
        temp = temp / 10;
    }
    printf("Reversed number: %d\n",sum1);

    // palindrome or not
    temp = num;
    if (temp == sum1)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }

    return 0;
}