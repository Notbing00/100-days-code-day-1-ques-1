#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);

    // Remove newline if present
    if(s[n-1] == '\n') {
        s[n-1] = '\0';
        n--;
    }

    int first = 1;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(!first) printf(",");
            for(int k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            first = 0;
        }
    }

    return 0;
}
