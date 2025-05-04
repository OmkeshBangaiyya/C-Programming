#include<stdio.h>

int main(){
    int empId,depNo;
    //take employee id 
    printf("Enter the Employee Id \n");
    scanf("%d",&empId);

    //take a department no
    printf("Enter the department number\n");
    scanf("%d",&depNo);

    switch (depNo)
    {
    case 10:
        printf("Employee With Emp Id : %d is working in \"Marketing\" ",empId");
        break;
    
    default:
        break;
    }


}