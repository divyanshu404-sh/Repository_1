//Write a program to take an integer array as input. Only one element 
//will be repeated. Print the repeated element. Try to find the result 
//in one single iteration.

#include <stdio.h>

int main(){

    int n;

    printf("Enetr n:\n");
    scanf("%d",&n);

    int num[n];
    int arr[1000]={0};

    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
    
    if(arr[num[i]]>0){
        printf("Repeated element = %d \n",num[i]);
    }
    arr[num[i]]++;
    }

    return 0;
}