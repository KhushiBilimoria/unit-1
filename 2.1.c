#include<stdio.h>
int main ()
{
    float a,b;
    printf("enter two values:");
    scanf("%f%f",&a,&b);
    if(a>b){ 
        printf("largest number is: %2f\n",a);
        printf("smallest number is: %2f\n",b);
    }if(a<b){
        printf("smallest number is: %2f\n",a);
        printf("largest number is: %2f\n",b);
    }return 0;
}