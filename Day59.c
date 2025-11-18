//Write a program to take an integer array arr and an integer k as inputs. 
//Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main(){

    int n,k;
    printf("Enter no. of elements:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter k:\n");
    scanf("%d",&k);
    int sum=-10;

    int subarr[k];
    for(int i=0;i<=(n-k);i++){
        int sumnow=0;
        for(int j=i;j<i+k;j++){
            sumnow+=arr[j];
        }
        if(sum<sumnow){
            sum=sumnow;
        }   
    }
    printf("Maximum sum = %d\n",sum);
    return 0;
}