// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of 
// the smallest element in arr[] that is greater than or equal to x and print it. This element is called 
// the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil 
// of x, return the index of the first occurrence.

// Follow-up(optional): Can you do it in O(log n) Time Complexity?-YES

#include <stdio.h>

int main(){

    int n,x;
    printf("Enter no. of elements in array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter 'x':\n");
    scanf("%d",&x);

    int index=-1;
    int l=0,r=n-1,mid;

    while(l<=r){
        mid=(l+r)/2;
        if(x<=arr[mid]){
            index=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
        printf("%d\n",index);
    
    

    return 0;
}