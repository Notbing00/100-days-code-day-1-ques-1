//Q71: Read and print a matrix.

#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int mat[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
