#include <stdio.h>
int main() {
    int a,b,addition,difference,product,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    addition=a+b;
    printf("The sum of two numbers is: %d\n",addition);
    difference=a-b;
    printf("The difference of two numbers is: %d\n",difference);
    product=a*b;
    printf("The product of two numbers is: %d\n", product);
    c=a/b;
    printf("a/b= %d\n",c);
    return 0;
}