#include <stdio.h>
int main() 
{
    float Dollar, Rs;
    printf("Enter amount in dollars:");
    scanf("%f", &Dollar);
    Rs=Dollar*48;
    printf("Amount in Rs is: %f\n",Rs);
    return 0;
}