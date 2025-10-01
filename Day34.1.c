//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, pos, element;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 to accommodate new element
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &element);

    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = element;
    n++; // New size

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}