//Question-3
//Write a program to accept number and check whether the number is +ve, -ve and zero.
//-------------------------------------------------------------------

#include<stdio.h>

int main(){

    //take a input number 
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);

    //check number is positive negative zero
    //by using ternary operator

    // if(num == 0 ? printf("Number is zero") : num > 0 ? printf("Number is positive")  : printf("Number is negative")) ;

    //check number is positive negative zero
    //by using nested if-else


    if(num==0){
        printf("Entered number is zero");
    }
    else if(num>0){
        printf("Entered number is positive");
    }
    else{
        printf("Entered number is negative");
    }

    return 0 ;
}