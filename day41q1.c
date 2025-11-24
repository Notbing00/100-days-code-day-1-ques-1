//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        count++;
        i++;
    }

    // count includes the newline if input came from fgets.
    // If you want EXACT count (ignoring newline), subtract if needed:
    if (count > 0 && str[count-1] == '\n')
        count--;

    printf("%d", count);

    return 0;
}
