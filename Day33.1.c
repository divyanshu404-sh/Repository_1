// Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, key;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, found = 0;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == key) {
            found = 1;
            printf("Element found at index %d\n", mid);
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(!found) {
        printf("Element not found\n");
    }

    return 0;
}