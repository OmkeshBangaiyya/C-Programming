// Write a program to accept a character c and display category of the input character.
// ALPHABET : c is a letter (65 to 90 or 97 to 122)
// UPPERCASE : c is an uppercase letter (65 to 90)
// LOWERCASE : c is a lowercase letter (97 to 122)
// DIGIT : c is a digit (48 to 57)
// OTHER : c is a space (32), tab(9), carriage return(13), new line(10)
// : Not listed above

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
    {
        if (ch >= 65 && ch <= 90)
        {
            printf("Entered character is uppercase %c\n", ch);
        }
        else
        {
            printf("Entered character is lowercase %c\n", ch);
        }
        printf("Entered character is alphabet %c\n", ch);
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Entered character is digit %c\n", ch);
    }
    else if (ch == 32)
    {
        printf("Entered character is space\n");
    }
    else if (ch == 9)
    {
        printf("Entered character is tab\n");
    }
    else if (ch == 13)
    {
        printf("Entered character is crriage return\n");
    }
    else if (ch == 10)
    {
        printf("Entered character is new line\n");
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}