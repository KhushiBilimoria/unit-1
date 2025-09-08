#include<stdio.h>
int main()
{
    float g,Kg;
    printf("Enter weight in Kilograms:");
    scanf("%f",&Kg);
    g=1000*Kg;
    printf("The weight in grams is: %f:",g);
    return 0;
}