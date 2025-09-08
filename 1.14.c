#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter temprature in degree Celcius:");
    scanf("%f",&C);
    F=1.8*C+32;
    printf("Temprature in Fahrenheit is: %f\n",F);
    return 0;
} 