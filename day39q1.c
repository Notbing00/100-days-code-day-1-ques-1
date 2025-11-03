// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int r, c, i, j, k, flag = 1;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    if (r != c) {
        printf("False");
        return 0;
    }

    for (i = 0; i < r; i++) {
        for (k = i + 1; k < r; k++) {
            if (a[i][i] == a[k][k]) {
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }

    if (flag)
        printf("True");
    else
        printf("False");

    return 0;
}
