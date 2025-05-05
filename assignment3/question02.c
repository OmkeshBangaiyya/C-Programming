#include <stdio.h>
int main()
{
    int num, i;
    i = 1;
    num = 10;
    // while goes from 1 to 10
    while (i <= num)
    {
        // it prints the 9's table
        printf("9 * %d = %d\n", i, 9 * i);

        // it increse the value by 1
        i++;
    }
    return 0;
}