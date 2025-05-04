/*
- 1 unit price = 5
- if we buy 30+ qty => 10 % discount
- if we buy 50+ qty => 15 % discount
- if we buy less that 30 qty => no discount

*/
#include<stdio.h>

int main()
{
    int qty,unit=5;
    printf("Enter the qty : ");
    scanf("%d",&qty); // 10

    float price;
    if ( qty >= 50)
    {
        //      60  * 5   
        //        
        price= (qty * unit) - ((qty * unit) * 15.0f/100 );
        printf("Final value with 15%% disc : %.2f \n",price);
    }
    else if ( qty >= 30)
    {       
        price= (qty * unit) - ((qty * unit) * 10.0f/100 );
        printf("Final value with 10%% disc : %.2f \n",price);
    }
    else
    {
        price= (qty * unit) ;
        printf("Final value  : %.2f \n",price);
    }
    return 0;
}