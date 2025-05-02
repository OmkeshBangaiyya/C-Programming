// Write a program to Accept two numbers and
// a. find its sum.
// b. find its difference.
// c. find its product.
// Test the program using different integral data type signed/unsigned char/int/long
// First test the result using small values. Then test the same program using large values.
// Observe the results.

#include <stdio.h>
int main()
{
    // Take two number as a input
    //For signed numbers 
    //contain all numbers like positive, negative 
    //not necessary to declare signed infront of variable declaration 

    signed int num1, num2, sum, diff, pro;

    printf("Enter two signed numbers\n");
    scanf(" %d%d ", &num1, &num2);
    printf("Two numbers are %d and %d \n", num1, num2);

    // Addition
    sum = num1 + num2;
    printf("Sum of numbers are %d\n", sum);

    // Difference
    diff = num1 - num2;
    printf("Difference of numbers are %d\n", diff);

    // Product
    pro = num1 * num2;
    printf("Product of numbers are %d\n", pro);

    //---------------for Unsigned number-----------------
    //Unsigned means only the positive numbers 
    //Incase in unsigned we have to compulsary declare as unsigned word infront of variable declaration 

    unsigned int num4, num5, sum1, diff1, pro1;

    printf("Enter two unsigned numbers\n");
    scanf(" %d%d ", &num4, &num5);
    printf("Two numbers are %d and %d \n", num4, num5);

    // Addition
    sum1 = num4 + num5;
    printf("Sum of numbers are %d\n", sum1);

    // Difference
    diff1 = num4 - num5;
    printf("Difference of numbers are %d\n", diff1);

    // Product
    pro1 = num4 * num5;
    printf("Product of numbers are %d\n", pro1);

    return 0;
}