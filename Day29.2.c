// Find the maximum and minimum element in an array.

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
    
     int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("Max=%d, Min=%d",max,min);

    return 0;

}