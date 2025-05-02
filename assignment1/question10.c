#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c, peri , area, s;
    printf("Enter the values sides of triange a, b, c : ");
    scanf("%f%f%f",&a,&b,&c);

    peri = (a+b+c)/3;
    printf("The perimeter of the triangle is %f",peri);

    s = peri/2;
    area =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %f",area);

    return 0;

}