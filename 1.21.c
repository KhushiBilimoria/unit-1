#include<stdio.h>
int main()
{
    float Net_salary,gross_salary, allowance, deduction;
    printf("Enter gross salary:");
    scanf("%f",&gross_salary);
    allowance=0.1*gross_salary;
    deduction=0.03*gross_salary;
    Net_salary=gross_salary+allowance-deduction;
    printf("net salary=: %2f\n",Net_salary);
    return 0;
}