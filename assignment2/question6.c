// Write a program to accept a 5 digit number and check whether it is a numeric palindrome. 
// (If reversed number is same as entered number it is called palindrome).

 #include<stdio.h>

 int main(){

 }




 //--------------------------------------------------------------------------------------------
 /*
- accept 5 digit num
- check the given num is palindrome or not
  e.g   12345  => 54321  : not palindrome
        12321  => 12321  : palindrome
*/

// #include<stdio.h>

// int main()
// {
//     int num;
//     printf("Enter 5 digit num : ");
//     scanf("%d",&num);//12345

//     //  temp = 12345
//     int temp = num;
//     int rem,rev=0;

//     //  % -> rem
//     //  / -> quot
//     rem = num % 10 ; // 12345 % 10  => 5 (rem)
//     rev = rev * 10 + rem ; // 0 * 10 + 5 => 5(rev)
//     num = num / 10 ; // 12345 / 10 =>  1234(num)

//     rem = num % 10 ; // 1234 % 10  => 4 (rem)
//     rev = rev * 10 + rem ; // 5 * 10 + 4 => 54(rev)
//     num = num / 10 ; // 1234 / 10 =>  123(num)

//     rem = num % 10 ; // 123 % 10  => 3 (rem)
//     rev = rev * 10 + rem ; // 54 * 10 + 3 => 543(rev)
//     num = num / 10 ; // 123 / 10 =>  12(num)

//     rem = num % 10 ; // 12 % 10  => 2 (rem)
//     rev = rev * 10 + rem ; // 543 * 10 + 2 => 5432(rev)
//     num = num / 10 ; // 12 / 10 =>  1(num)

//     rem = num % 10 ; // 1 % 10  => 1 (rem)
//     rev = rev * 10 + rem ; // 5432 * 10 + 1 => 54321(rev)
   
//     if( rev == temp )
//     {
//         printf("The num is palindrome \n");
//     }
//     else{
//         printf("The num is Not Palindrome \n");
//     }

//     return 0;
// }
