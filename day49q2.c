#include <stdio.h>
#include <string.h>

int main() {
    char s[300];
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);

    // Remove trailing newline
    if(s[n-1] == '\n') s[n-1] = '\0';

    // Print first initial
    if(s[0] != ' ')
        printf("%c.", s[0]);

    // Print middle initials (all words except last)
    int lastSpace = -1;
    for(int i = 1; s[i] != '\0'; i++) {
        if(s[i] == ' ') lastSpace = i;
    }

    for(int i = 1; i < lastSpace; i++) {
        if(s[i] == ' ' && s[i+1] != ' ') {
            printf("%c.", s[i+1]);
        }
    }

    // Print surname fully
    printf(" %s", s + lastSpace + 1);

    return 0;
}
