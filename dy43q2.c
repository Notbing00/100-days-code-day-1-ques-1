//Q86: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", s);

    len = strlen(s);

    for(i = 0; i < len/2; i++) {
        if(s[i] != s[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
