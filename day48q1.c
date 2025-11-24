//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200], temp[400];

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // Remove newline if present
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // Length mismatch → impossible
    if(strlen(s1) != strlen(s2)) {
        printf("Not rotation");
        return 0;
    }

    // Make temp = s1 + s1
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is inside temp
    if(strstr(temp, s2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
