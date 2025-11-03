//Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n, i, pos;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &pos);  // position to delete (1-based)
    pos--;               // convert to 0-based index

    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--; // one element removed

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
