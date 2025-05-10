/*
- accept 5 sub marks
- calculate its total
- calculate its avg
*/

#include<stdio.h>
int main()
{
    int m1,  m2,m3,m4,m5;

    // 
    int marks[5]; // here we are declaring array of int
                  //
    printf("size => %d \n",sizeof(marks));//20

    //----------------------------->
    // 100  104  108  112  116   => address of individual values
    //[ 10   20   30   40  50 ]  => 20 bytes of mem
    //   0    1    2    3   4   ....=> Index

    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;
    marks[4] = 50;

    int i;
    for(i=0 ; i < 5 ; i++)
    {
        printf("Enter the marks : ");
        scanf("%d", &marks[i]);
       // printf("Marks[%d] : %d \n",i,marks[i]);
    }

    for(i=0 ; i < 5 ; i++)
    {
        printf("Marks[%d] : %d \n",i,marks[i]);
    }

    int sum=0;
    //  10 20 10 30 40
    //   0  1  2  3  4  5
    //                  i
    //        5 < 5
    for(i=0 ; i < 5 ; i++)
    {
        sum= sum + marks[i];
        //10  0  +     10 
        //30  10 +     20 
        //40  30 +     10 
        //70  40 +     30
        //110 70 +     40
    }
    printf("sum of array : %d \n",sum);
    

    int size = sizeof(marks) / sizeof(int);
    //   5         20         /     4

    printf("Avg = %.2f\n",(float)sum/size);




    return 0;
}