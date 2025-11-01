//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Find GCD using Euclid’s Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Compute LCM using formula: LCM * GCD = a * b
    lcm = (tempA * tempB) / gcd;

    printf("%d", lcm);
    return 0;
}
