//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // Remove newline if present
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // If lengths differ → instantly not anagrams
    if(strlen(s1) != strlen(s2)) {
        printf("Not anagrams");
        return 0;
    }

    for(i = 0; s1[i] != '\0'; i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
