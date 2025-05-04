#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num%2==0){
        printf("Enter the number %d is even", num);
    }else{
        printf("Enter the number %d is odd", num);
    }

    return 0; 
}