//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, element;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 to accommodate new element
    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    int i = n - 1;
    while(i >= 0 && arr[i] > element) { 
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = element;
    n++; // New size

    printf("Array after insertion: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    return 0;
}