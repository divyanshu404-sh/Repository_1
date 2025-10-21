// Write a Program to take an array of integers as input, calculate the pivot index of this array. 
// The pivot index is the index where the sum of all the numbers strictly to the left of the index 
// is equal to the sum of all the numbers strictly to the index's right. If the index is on the left
// edge of the array, then the left sum is 0 because there are no elements to the left. This also applies 
// to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1

//Follow-up(optional): Try to solve this in O(n) TC.- YES.

#include <stdio.h>

void pivot(int arr[], int n){

    int p=0,sl=0,sr=0,total=0,index=-1;
    for(int i=0;i<n;i++){
           total+=arr[i];             
    }
    for(int i=0;i<n;i++){
        sl=sl+arr[i];
        sr=total-sl; 
        if(sl-arr[i]==sr){
            index=i;
            break;
        }
    }
    printf("pivot=%d\n",index);
}

int main(){

    int n;
    printf("Enter no. of elements:\n");
    scanf("%d",&n);

    int num[n];

    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    pivot(num, n);

    return 0;
}