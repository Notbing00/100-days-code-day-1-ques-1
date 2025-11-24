//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main() {
    char s[200];
    gets(s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }

    printf("%s", s);
    return 0;
}
