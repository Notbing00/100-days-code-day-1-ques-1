// Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int r, c, i, j, flag = 1;
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
        for (j = 0; j < c; j++) {
            if (a[i][j] != a[j][i]) {
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
