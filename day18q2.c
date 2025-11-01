//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d", a);
    return 0;
}
