//--------------------------------------------------
    //          *
    //        * *
    //      * * *
    //    * * * *
    //  * * * * *
    // -------------------------------------------
#include<stdio.h>
int main(){
    int row;

    printf("Enter a row count: ");
    scanf("%d",&row);
    
    //for row 
    for(int i=1;i<=row;i++){
        for(int k =1 ; k<=row-i ; k++ ){
            printf("  ");
        }
        for(int j = 1; j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


