// Q69: Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = arr[0], second = -1e9; // assuming array has positive/normal ints

    for (i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    printf("%d", second);

    return 0;
}
