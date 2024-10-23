#include <stdio.h>
int main()
{
    // I=PRN/100
    // I=simple intrest
    // p=principle
    // r=rate of interest
    // n=year

    float p, r, n, i;
    printf("Enter the value for principle=");
    scanf("%f", &p);

    printf("Enter the value for rate of interest=");
    scanf("%f", &r);

    printf("Enter the value for year=");
    scanf("%f", &n);

    i = p * r * n / 100;
    printf("intrest for yor given value=%f", i);
}