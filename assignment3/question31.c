#include <stdio.h>
#include <math.h> //it contain pow -->pre-define function 

int main()
{
    int num, temp, remainder, sum, cnt = 0;

    printf("Enter the number:");
    scanf("%d", &num);

    temp = num;

    // check the count of number
    while (num != 0)
    {
        cnt++;
        num = num / 10;
    }
    // it prints the count of digit eg. 1234==>4
    printf("count of number is:%d\n", cnt);

    num = temp;
    sum = 0;

    // it count the sum of digit raised to count
    // 1234==>
    // cnt-->4
    // sum(digit^cnt)
    // 1^4 + 2^4 + 3^4 + 4^4 == 354
    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + pow(remainder, cnt);
        temp = temp / 10;
    }

    // it prints sum ==>354
    printf("The value of sum:%d\n", sum);

    // if original number == the sum of (digit raised to total number of count)
    if (num == sum)
    {
        printf("Number is Armstrong\n");
    }
    else
    {
        printf("Number is not Armstrong");
    }

    return 0;
}
