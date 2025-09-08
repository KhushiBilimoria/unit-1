#include<stdio.h>
int main()
{
    float Net_sales,gross_sales, discount;
    printf("Enter gross sales:");
    scanf("%f",&gross_sales);
    discount=0.1*gross_sales;
    Net_sales=gross_sales-discount;
    printf("net sales=: %2f\n",Net_sales);
    return 0;
}