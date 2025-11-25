//Write a program to take an integer array nums which contains only 
//positive integers, and an integer target as inputs. The goal is to 
//find two distinct indices i and j in the array such that nums[i] + 
//nums[j] equals the target. Assume exactly one solution exists and 
//return the indices in any order. Print the two indices separated by 
//a space as output. If no solution exists, print "-1 -1".

#include <stdio.h>

int main(){

    int n,target;
    printf("Enter no. of elements:\n");
    scanf("%d",&n);

    int nums[n];

    printf("Enter elements(only positive number):\n");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }

    int ind1=-1,ind2=-1;
    printf("Emter target:\n");
    scanf("%d",&target);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(nums[i]+nums[j]==target){
                ind1=i;
                ind2=j;
                goto done;
                }
            }
        }
    }
done:
    printf("%d %d\n",ind1,ind2);

    return 0;

}