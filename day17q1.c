//: Write a program to check if a number is an Armstrong num.
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }
    if ((int)result == num)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
