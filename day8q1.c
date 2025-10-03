//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) 
    {
        printf("'%c' is an Uppercase Alphabet.\n", ch);
    }
    else if (islower(ch)) 
    {
        printf("'%c' is a Lowercase Alphabet.\n", ch);
    }
    else if (isdigit(ch)) 
    {
        printf("'%c' is a Digit.\n", ch);
    }
    else 
    {
        printf("'%c' is a Special Character.\n", ch);
    }

    return 0;
}
