#include <stdio.h>

int main()
{

    char ch = '*';

    // printf("Enter a character:\n");
    // scanf("%c",&ch);

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}