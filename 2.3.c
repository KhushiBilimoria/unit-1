#include<stdio.h>
int main ()
{
    int net_salary, gross_salary, deduction, allowance;
    printf("Enter the gross salary: ");
    if (gross_salary>10000){ 
        deduction=0.03*gross_salary;
        allowance=0.1*gross_salary;
        net_salary=gross_salary-deduction+allowance;
        printf("The net salary is: %d", net_salary);
    }
    else if (gross_salary>5000){
        deduction=0.02*gross_salary;
        allowance=0.07*gross_salary;
        net_salary=gross_salary-deduction+allowance;
        printf("The net salary is: %d", net_salary);
    }
    return 0;
}