//Write a program to take an integer array arr and an integer k as 
//inputs. The task is to find the kth smallest element in the array. 
//Print the kth smallest element as output.

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

int min;
for(int m=0;m<k;m++){
    min=arr[0];
for(int i=0;i<n;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}
for(int j=0;j<n;j++){
    if(arr[j]==min){
        arr[j]=900;
    }
}
}

printf("%d'th smallest element = %d",k,min);

return 0;
}