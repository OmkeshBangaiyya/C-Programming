// #include<stdio.h>
// int main(){
//     float cal,far ; 

//     printf("Enter the temperature in far:");
//     scanf("%f",&far);

//     //convert far to cal
//     cal = (5/9.0)*(far-32);
//     printf("The tempreture in cal is:%.2f",cal);

//     //convert cal to far 
//     far = ((9/5)*cal)+32 ; 
//     printf("The tempreture in far is:%.2f",far);
    
//     return 0;
// }

#include<stdio.h> 
    int main()
{
    float far,cel;
    printf("Enter the Temp in Far :");
    
    scanf("%f",&far);
    cel= (5/9.0f)*(far - 32);
    printf("Temp in cel -> %.2f \n",cel);
    
    far = ((9.0f/5)*cel)+32;
    printf("Temp in far -> %.2f \n ",far);
    return 0;
    
}