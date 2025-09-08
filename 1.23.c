#include<stdio.h>
int main()
{
    float a,b,c,Total_marks,Average_marks;
    printf("Enter marks:");
    scanf("%f%f%f",&a,&b,&c);
    Total_marks= a+b+c;
    Average_marks=Total_marks/3;
    printf("Total score is= %2f\n",Total_marks);
    printf("Average score=%f\n",Average_marks);
    return 0;
}