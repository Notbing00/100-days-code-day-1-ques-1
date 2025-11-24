//Q82: Print each character of a string on a new line.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] != '\n')   // ignore newline from fgets
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
