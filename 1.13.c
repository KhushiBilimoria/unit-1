#include<stdio.h>
int main()
{
    float B, KB, MB,GB;
    printf("bytes:");
    scanf("%f",&B);
    KB=B/1000;
    MB=B/1000000;
    GB=B/1000000000;
    printf("KB: %f\n",KB);
    printf("MB: %f\n",MB);
    printf("GB: %f\n",GB);
    return 0;
}