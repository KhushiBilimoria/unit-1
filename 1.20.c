#include<stdio.h>
int main()
{
    float A,B,H;
    printf("Enter Height and Base of triangle:");
    scanf("%f%f",&B,&H);
    A=0.5*B*H;
    printf("Area of Triangle is: %2f\n",A);
    return 0;
}