// Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

   
    for (int k = 0; k < c; k++) {
        i = 0;
        j = k;
        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    for (int k = 1; k < r; k++) {
        i = k;
        j = c - 1;
        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
