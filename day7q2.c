//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main ()
{
    char n;
    printf("Enter an alphabet\n");
    scanf(" %c", &n);

    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' ||
       n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
    {
        printf("It is a vowel\n");
    }
    else 
    {
        printf("It is a consonant\n");
    }
    return 0;
}