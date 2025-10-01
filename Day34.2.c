//Delete an element from an array.

#include <stdio.h>

int main() {
    int n, pos;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position of element to delete: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements left to overwrite the element at 'pos'
    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Reduce the size of array

    printf("Array after deletion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}