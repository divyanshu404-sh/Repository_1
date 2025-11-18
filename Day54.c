// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum 
// of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. 
// Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there 
// will be at most one pivot integer for the given input.

// Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? 

#include <stdio.h>

int main(){

    int n;
    int x=-1;

    printf("Enter n :\n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        if((i*i)==(((n*n)+n)/2)){
            x=i;
        }
    }
    printf("Pivot=%d\n",x);

   return 0;
    
}
