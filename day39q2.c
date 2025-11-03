//78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    if (r != c) {
        printf("Matrix is not square");
        return 0;
    }

    for (i = 0; i < r; i++)
        sum += a[i][i];

    printf("%d", sum);

    return 0;
}
