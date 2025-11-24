//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char s[100], result[100];
    int i, j = 0;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' &&
           c!='A' && c!='E' && c!='I' && c!='O' && c!='U') {
            result[j++] = c;
        }
    }
    result[j] = '\0';

    printf("%s", result);
    return 0;
}
