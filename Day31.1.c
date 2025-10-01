//Search for an element in an array using linear search.

#include <stdio.h>

int main(){

    int n,p;
    printf("Enter number of elements: \n");
    scanf("%d",&n); 
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element of array of index %d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the nunber to search: \n");
    scanf("%d",&p);

    for(int i=0;i<n;i++){
        if(arr[i]==p){
            printf("Found at index %d",i);
        }
    }
    return 0;
}