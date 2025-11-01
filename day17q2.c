//Q34: Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not prime");
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}

