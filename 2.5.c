#include<stdio.h>
int main()
{
    int net_sales, gross_sales, discount;
    printf("Enter the gross sales: ");
    scanf("%d", &gross_sales);
    if (gross_sales>20000){
        discount=0.15*gross_sales;
        net_sales=gross_sales-discount;
        printf("The net sales is: %d", net_sales);
    }else if (gross_sales>10000){
        discount=0.10*gross_sales;
        net_sales=gross_sales-discount;
        printf("The net sales is: %d", net_sales);
    }else if (gross_sales<10000){
        discount=0.05*gross_sales;
        net_sales=gross_sales-discount;
        printf("The net sales is: %d", net_sales);
    }
    return 0;
}