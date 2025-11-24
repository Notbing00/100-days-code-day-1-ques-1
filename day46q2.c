//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char s[200];
    int freq[26] = {0};
    int i;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if(c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
            if(freq[c - 'a'] == 2) {
                printf("%c", c);
                return 0;
            }
        }
    }

    // If no repeating character found
    printf("-1");
    return 0;
}
