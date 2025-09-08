#include<stdio.h>
int main()
{
    float g, Kg;
    printf("Enter weight in grams:");
    scanf("%f",&g);
    Kg=0.001*g;
    printf("The weight in Kilograms is: %f:",Kg);
    return 0;
}