//Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n; // In case k > n

    // Rotate using a temporary array
    int temp[k];
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i]; // Store last k elements
    }

    for(int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k]; // Shift rest of the elements right
    }

    for(int i = 0; i < k; i++) {
        arr[i] = temp[i]; // Place saved elements at the beginning
    }

    printf("Array after rotation: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}