// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, n, simple, compound;
    printf("Enter principal, rate, time, and number of times interest applied per year:\n");
    scanf("%f %f %f %f", &p, &r, &t, &n);

    simple = (p * r * t) / 100;
    printf("Simple interest = %.2f\n", simple);

    compound = p * pow((1 + r/(100*n)), n*t) - p;
    printf("Compound interest = %.2f\n", compound);

    return 0;
}