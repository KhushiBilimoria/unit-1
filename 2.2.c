#include<stdio.h>
int main()
{ 
    int p,q,r;
    printf("Enter three values:");
    scanf("%d%d%d",&p,&q,&r);
    if(p>q>r){
        printf("The largest number is: %d\n",p);
        printf("The smallest number is: %d\n",r);
    }else if("p>r>q"){
        printf("The largest number is: %d\n",p);
        printf("The smallest number is: %d\n",q);
    }else if("q>p>r"){
        printf("The largest number is: %d\n",q);   
        printf("The smallest number is: %d\n",r);
    }else if("q>r>p"){          
        printf("The largest number is: %d\n",q);
        printf("The smallest number is: %d\n",p);  
    }else if("r>p>q"){   
        printf("The largest number is: %d\n",r);
        printf("The smallest number is: %d\n",q);
    }else if("r>q>p"){
        printf("The largest number is: %d\n",r);
        printf("The smallest number is: %d\n",p);
    }
    return 0;
}