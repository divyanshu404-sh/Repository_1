// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main(){

    int n;

    printf("Enter number of elements of array: \n");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter element no. %d: \n",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}