//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() 
{
    int num, binary = 0, place = 1, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        remainder = num % 2;
        binary += remainder * place;
        place *= 10;
        num /= 2;
    }

    printf("%d\n", binary);
    return 0;
}
