#include <stdio.h>

int main()
{

    // take three number as a input from user
    int a, b, c;
    printf("Enter three number a,b,c:");
    scanf("%d%d%d", &a, &b, &c);

    //----------------------------------------------------------------------------------------------
    // check it by using nested if-else
    // Logic----->
    // a>b b>c therefore a>c

    // if(a>b){
    //     printf("Number a is maximum");
    // }
    // else if(b>c){
    //     printf("Number b is maximum");
    // }
    // else{
    //     printf("Number c is maximum");
    // }
    //---------------------------------------------------------------------------------------------------

    // check it by conditional operator
    // Logic----->
    // a>b b>c therefore a>c

    (a > b && a > c) ? printf("a is maximum\n") : (b > c) ? printf("b is maximum\n"): printf("c is maximum\n");

    return 0;
}