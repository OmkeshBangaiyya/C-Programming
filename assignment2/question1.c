#include <stdio.h>
int main()
{
    // accept two number
    int num1, num2;
    printf("Enter the num1 and num2:\n");
    scanf("%d%d", &num1, &num2);

    // print division
    float div;

    if (num2 != 0)
    {
        div = (float)num1 / num2;
        printf("Division=%f", div);
    }
    else
    {
        printf("Error: we can't divide by 0");
    }

    return 0;
}