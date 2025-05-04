// Question-4
// Write a program to find maximum of two numbers using
//  a. if-else
//  b. conditional operator.

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the number num1 and num2=");
    scanf("%d%d", &num1, &num2);

    // using if-else
    // if (num1 > num2)
    // {
    //     printf("The num1 is maximum");
    // }
    // else
    // {
    //     printf("The num2 is maximum");
    // }

    //by conditional operator
   (num1>num2 ? printf("num1 is maximum"):printf("num2 is maximum"));

    return 0;
}