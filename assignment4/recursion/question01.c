#include <stdio.h>

int fact_fun(int n);

int main()
{
    //accept a number from user
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    //function call
    int factorial = fact_fun(num);

    printf("The factorial of a given %d is %d \n", num, factorial);
    return 0;
}

int fact_fun(int n)
{
    int res;
    // terminating condition
    if (n == 0 || n == 1)
    {
        return 1;//base condition
    }
    else
    {
        res = n * fact_fun(n - 1); //recursive function ---> function calls itself
        return res;
    }
}