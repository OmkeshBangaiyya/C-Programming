#include <stdio.h>

int main()
{
    int num1, num2; // for X and Y
    printf("Enter the value of num1 and num2 :\n");
    scanf("%d%d", &num1, &num2);

    // origin
    if (num1 == 0 && num2 == 0)
    {
        printf("Point lies on the origin");
    }

    // check for axis
    else if (num1 > 0 && num2 == 0)
    {
        printf("Point lies on positive X-axis");
    }
    else if (num1 == 0 && num2 > 0)
    {
        printf("point lies on positive Y-axis");
    }
    else if (num1 < 0 && num2 == 0)
    {
        printf("Point lies on negative X-axis");
    }
    else if (num1 == 0 && num2 < 0)
    {
        printf("Point lies on negative Y-axis");
    }

    // Check for quadrant

    //(+,+)first qua
    else if (num1 > 0 && num2 > 0)
    {
        printf("Point lies in first quadrant");
    }
    //(-,+)=>second qua
    else if (num1 < 0 && num2 > 0)
    {
        printf("Point lies in second quadrant");
    }
    //(-,-)==> third quadrant
    else if (num1 <= 0 && num2 < 0)
    {
        printf("Point lies in third quadrant");
    }
    //(+,-)==> fourth qua
    else
    {
        printf("point lies in fourth quadrant");
    }

    return 0;
}