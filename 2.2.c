#include<stdio.h>
int main ()
{ 
    int p,q,r;
    printf("enter three numbers");
    scanf("%d%d%d",&p,&q,&r);
    if(p>q && p>r)
    {
        printf("%d is the largest number",p);
    }
    else if(q>p && q>r)
    {
        printf("%d is the largest number",q);
    }
    else
    {
        printf("%d is the largest number",r);
    }
    if(p<q && p<r)
    {
        printf("\n%d is the smallest number",p);
    }
    else if(q<p && q<r)
    {
        printf("\n%d is the smallest number",q);
    }
    else
    {
        printf("\n%d is the smallest number",r);
    }
    return 0;
}