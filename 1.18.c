#include<stdio.h>
int main()
{
    float W,P,A,S;
    printf("Enter dimensions of Rectangle:");
    scanf("%f%f",&S,&W);
    A=W*S;
    P=(S+W)*2;
    printf("Area of Rectange is: %2f\n",A);
    printf("Perimeter of Rectangle is: %2f\n",P);
    return 0;
}