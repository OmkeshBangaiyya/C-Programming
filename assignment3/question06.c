// #include<stdio.h>
// int main(){
//     int num,i,factorCount;

//     //Accept a number
//     printf("Enter a number: ");
//     scanf("%d",&num);

//     factorCount =0;

//     for(i=1 ; i<=num-1 ; i++){
//         if(num%i==0){
//             factorCount++;
//             printf("the factor of a number:%d\n",factorCount);
//         }
//                    }
//             printf("the factor of a number:%d\n",factorCount);
// return 0;
// }

#include <stdio.h>

int main()
{
    int num, i;

    // Accept a number
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d", i);
        }
        if (i < num / 2 && num % i == 0)
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
