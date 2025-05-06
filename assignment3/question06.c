#include <stdio.h>

int main()
{
    int i, num;

    // accept a number
    printf("Enter a number:\n");
    scanf("%d", &num);

    // declare factorial variable for storing variable
    unsigned long long factorial = 1;

    // i++         num
    // 1    <=      5       true
    // 2    <=      5       true
    // 3    <=      5       true
    // 4    <=      5       true
    // 5    <=      5       true
    // 6    <=      5       false (exit loop)
    for (i = 1; i <= num; i++)
    {

        // = factorial * i
        // =   1   *   1   =   1
        // =   1   *   2   =   2
        // =   2   *   3   =   6
        // =   6   *   4   =   24
        // =   24  *   5   =   120
        factorial = factorial * i; // calculationg factorial
    }

    printf("%d!=%d\n", num, factorial);

    return 0;
}
