//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() 
{
    int num1, num2;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &num1, &num2, &op);

    switch(op) 
    {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if (num2 != 0)
                printf("%d\n", num1 % num2);
            else
                printf("Error: Modulus by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
