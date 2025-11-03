// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, num, pos = 0;
    scanf("%d", &n);
    int arr[n + 1];
    
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    scanf("%d", &num);

    // Find correct position
    while (pos < n && arr[pos] < num)
        pos++;

    // Shift elements to make space
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    
    arr[pos] = num;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
