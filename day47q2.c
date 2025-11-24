#include <stdio.h>
#include <string.h>

int main() {
    char s[300];
    char longest[100] = "";
    char current[100];
    int i, j = 0;

    fgets(s, sizeof(s), stdin);

    for(i = 0; ; i++) {
        if(s[i] == ' ' || s[i] == '\0' || s[i] == '\n') {
            current[j] = '\0';
            if(strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            j = 0; // reset for next word
            if(s[i] == '\0')
                break;
        } else {
            current[j++] = s[i];
        }
    }

    printf("%s", longest);
    return 0;
}
