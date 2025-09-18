// Find the sum of array elements.

#include <stdio.h>

int main(){

    int n;

    printf("Enter number of elements in array: \n");
    scanf("%d",&n);
    
     int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter element no. %d: \n",i);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("sum: %d",sum);

    return 0;

}