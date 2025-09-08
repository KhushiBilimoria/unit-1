#include<stdio.h>
int main()
{
    int a,b,c,sum,average;
    printf("Enter marks:");
    scanf("%d%d%d",&a,&b,&c);
    if (a<35 || b<35 || c<35){
        printf("Fail");
    }else { 
        sum=a+b+c;
        average=sum/3;
        if (average>=70){
            printf("Distinction");
        }else if(average>=60){
            printf("First");
        }else if(average>=50){
            printf("Second");
        }else if(average>=35){
            printf("Third");
        }else{
            printf("Fail");
        }
    }
    return 0;
}