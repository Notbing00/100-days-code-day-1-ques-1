#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    // Print first initial
    if(s[0] != ' ' && s[0] != '\n')
        printf("%c.", s[0]);

    // Print initials after spaces
    for(int i = 1; s[i] != '\0'; i++) {
        if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0' && s[i+1] != '\n') {
            printf("%c.", s[i+1]);
        }
    }

    return 0;
}
