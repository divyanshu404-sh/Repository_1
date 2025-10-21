// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
// The elements in the sorted array might be repeated. You need to print the first and last 
// occurrence of the target and print the index of first and last occurrence. Print -1, -1 
// if the target is not present.

// Follow-up(optional): Can you do it in O(log n) Time Complexity?-YES.

#include <stdio.h>

int main(){

    int n=17;
    printf("Enter no. of elements in array:\n");
    scanf("%d",&n);
    int nums[n];

    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int tar;
    printf("Enter number to search:\n");
    scanf("%d",&tar);

    int li=-1,ri=-1;
    int l=0,r=n-1;

    while(l<=r){
       int mid=(l+r)/2;
        if(tar==nums[mid]){
            li=mid;
            r=mid-1;
        }
        else if(tar>nums[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    int lr=0,rr=n-1;
    while(lr<=rr){
        int mid=(lr+rr)/2;
        if(tar==nums[mid]){
            ri=mid;
            lr=mid+1;
        }
        else if(tar<nums[mid]){
            rr=mid-1;
        }
        else{
            lr=mid+1;
        }
    }
    printf("%d, %d\n",li,ri);

    return 0;
}