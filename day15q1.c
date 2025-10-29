//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() 
{
    int n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        factorial *= i;
    }

    printf("%d\n", factorial);
    return 0;
}
