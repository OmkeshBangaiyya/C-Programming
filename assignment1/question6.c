#include<stdio.h>
int main(){

    int n1,n2,n3,n4,n5;

    //Accept integer values 
    printf("Enter five integer value:\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

    //print integer values 
    printf("_________________________________\n");
    printf("Entered integers\n");
    printf("_________________________________\n");
    printf("%d\t%d\t%d\t%d\t%d\t\n",n1,n2,n3,n4,n5);
    printf("_________________________________\n");

    return 0;
}