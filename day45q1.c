//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char s[200], ch;
    int count = 0;

    scanf("%s", s);
    getchar(); 
    scanf("%c", &ch);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ch)
            count++;
    }

    printf("%d", count);
    return 0;
}
