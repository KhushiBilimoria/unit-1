#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter temprature in degree Fahrenheit:");
    scanf("%f",&F);
    C=0.56*F-32;
    printf("Temprature in degree Celcius is: %f\n",C);
    return 0;
}