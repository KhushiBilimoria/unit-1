#include <stdio.h>
int main() 
{
    float Dollar, Rs;
    printf("Enter amount in Rs:");
    scanf("%f", &Rs);
    Dollar=Rs/48;
    printf("Amount in Dollar is: %f\n",Dollar);
    return 0;
}