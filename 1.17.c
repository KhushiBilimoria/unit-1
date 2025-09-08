#include<stdio.h>
int main()
{
    float L,P,A;
    printf("Enter dimensions of square:");
    scanf("%f",&L);
    A=L*L;
    P=4*L;
    printf("Area of square is: %2f\n",A);
    printf("Perimeter of square is: %2f\n",P);
    return 0;
}