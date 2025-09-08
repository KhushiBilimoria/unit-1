#include <stdio.h>
int main() 
{
    int hours, minutes;
    printf("Enter time in minutes:");
    scanf("%d", &minutes);
    hours=minutes/60;
    printf("Time in hours is: %d\n",hours);
    return 0;
}