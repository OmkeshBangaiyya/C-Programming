#include <stdio.h>

int main()
{

    char ch;
    int i = 0;
    int num;

    // for input character
    printf("Enter the character:\n");
    scanf(" %c", &ch);

    // for the number
    printf("Enter the number:\n");
    scanf("%d", &num);

    // char ch = '*';
    // int i = 0;
    // int num = 6;

    while (i < num)
    {
        printf(" %c", ch);
        i++;
    }

    return 0;
}