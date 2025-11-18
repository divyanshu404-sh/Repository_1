//Write a program to take an integer array arr as input. The task is to 
//find the maximum sum of any contiguous subarray using Kadane's 
//algorithm. Print the maximum sum as output. If all elements are 
//negative, print the largest (least negative) element.

#include <stdio.h>

int main(){

    int n;

    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    
    int arr[n];

    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k=0;
    int mx=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            k++;
        }
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    if(k==n){
        printf("%d\n",mx);
    }
    else{
    int max=arr[0],current=0;
    for(int i=0;i<n;i++){
        current+=arr[i];
        if(current<0){
            current=0;
        }
        if(max<current){
            max=current;
        }
    }
    printf("Maximum sum = %d\n",max);
}

    return 0;
}