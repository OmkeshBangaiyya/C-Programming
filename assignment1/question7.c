//Question 

/*
Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values

If user enters a 4 digit number 9361 output should be
a. 9 3 6 1
b. 9361 = 9000+300+60+9
c. 1639
*/

#include <stdio.h>
int main()
{
    int num = 9361;
    int n1, n2, n3, n4;

    // for thousand place
    n1 = num / 1000;
    
    // for hundred place
    int a = num % 1000;
    n2 = a / 100;
   
    // for ten place
    int b = num % 100;
    n3 = b / 10;
    
    // for unit place
    n4 = num % 10;
    
    //a. 9 3 6 1 
    // a. Display face value of each decimal digit
    printf("%d %d %d %d \n",n1,n2,n3,n4);

    //9361 = 9000+300+60+9
    // b. Display place value of each decimal digit
    printf("%d = %d + %d + %d + %d \n", num, n1 * 1000, n2 * 100, n3 * 10, n4);

    // 1639
    // c. Display no in reverse order by changing decimal place values
    printf("%d %d %d %d \n",n4,n3,n2,n1);

    return 0;
}