#include<stdio.h>
int main(){

    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    // for char
    printf("char : %c \n",num);

    //for octal
    printf("Octal : %o \n",num);

    //for hexa
    printf("Hexadecimal : %x \n",num);

    //for decimal
    printf("Decimal : %d \n",num);

    printf("\\n = %d",'\n');
    printf("\\r = %d",'\r');
    printf("\\b = %d",'\b');
    printf("\\t = %d",'\t');
    printf("\\a = %d",'\a');

    return 0;
}