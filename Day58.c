//Write a Program to take an integer array nums. Print an array answer 
//such that answer[i] is equal to the product of all the elements of nums 
//except nums[i]. The product of any prefix or suffix of nums is 
//guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main(){

    int n;
    printf("Enter the no. of elements:\n");
    scanf("%d",&n);

    int nums[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int answer[n];
    for(int i=0;i<n;i++){
        answer[i]=1;
        for(int j=0;j<n;j++){
            if(j!=i){
                answer[i]*=nums[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d,",answer[i]);
    }
    return 0;
}