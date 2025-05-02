#include <stdio.h>
int main()
{
    int num1, num2, num3;
    float avg;

    printf("Enter three number:");
    scanf("%d%d%d", &num1, &num2, &num3);

    avg = (num1 + num2 + num3) / 3.0f;
    // avg = ((float)n1+n2+n3)/3 ;

    printf("average:%f", avg);

    return 0;
}