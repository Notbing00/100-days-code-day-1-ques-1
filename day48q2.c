#include <stdio.h>
#include <string.h>

void reverse(char *s, int start, int end) {
    while(start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char s[300];
    fgets(s, sizeof(s), stdin);

    int i = 0, start = 0;
    int n = strlen(s);

    for(i = 0; i <= n; i++) {
        if(s[i] == ' ' || s[i] == '\0' || s[i] == '\n') {
            reverse(s, start, i-1);
            start = i + 1;
        }
    }

    printf("%s", s);
    return 0;
}
