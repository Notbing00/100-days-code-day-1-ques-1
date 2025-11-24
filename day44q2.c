#include <stdio.h>

int main() {
    char str[200];
    printf("Enter string: ");
    gets(str);

    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    printf("Output: %s", str);
    return 0;
}
