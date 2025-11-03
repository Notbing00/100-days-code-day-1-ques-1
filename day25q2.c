//Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>

int main() {
    int i, j, space, star;

    for (i = 1; i <= 5; i++) {
        
        for (space = 1; space < i; space++) {
            printf(" ");
        }

       
        for (star = 5; star >= i; star--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

