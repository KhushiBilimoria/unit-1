#include<stdio.h>
int main()
{
    float dollars, pounds;
    printf("Enter amount in Dollars:");
    scanf("%f",&dollars);
    pounds=1.458*dollars;
    printf("The amount in pounds is %f:",pounds);
    return 0;
}