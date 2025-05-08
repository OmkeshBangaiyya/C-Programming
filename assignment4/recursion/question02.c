// #include <stdio.h>
// #include <math.h>

// //function call
// int pow_fun(int base, int index);

// int main()
// {
//     //accept a base and index of a number

//     int b, i; // b = base, i = index
//     printf("Enter a value of base and index:");
//     scanf("%d%d", &b, &i);

//     //function call
//     int power = pow_fun(b, i);

//     printf("the power of a number is:%d", power);
//     return 0;
// }
// int pow_fun(int base, int index)
// {
//     // terminate condition

//     if (index == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         int poww;
//         poww = base * pow_fun(base, index - 1);//recursion

//         return poww;
//     }
// }


#include<stdio.h>

int factor(int a ,int b);

int main(){
    int a=2;
    int b=3;

    int c = factor(a , b);

    printf("add=%d",c);
    return 0;
}

int factor(int a ,int b){
    // terminate con 
    if(a==0||b==0){
        return 1;
    }
    else{
        int z =a+factor(a,b-1);
        return z;
    }
    
}
//function defination
//fun call
//fun declare
