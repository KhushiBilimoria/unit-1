#include <stdio.h>
int main() {
    float P, R, N, I;
    printf("Enter principal amount (P): ");
    scanf("%f",&P);
    printf("Enter rate of interest (R): ");
    scanf("%f", &R);
    printf("Enter time period in years (N): ");
    scanf("%f", &N);
    I = (P * R * N) / 100;
    printf("Interest = %.2f\n", I);
    return 0;
}