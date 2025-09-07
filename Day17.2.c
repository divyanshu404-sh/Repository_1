//Write a program to check if a number is prime.

#include <stdio.h>

int main(){

    int n;

    printf("Enter n:\n");
    scanf("%d",&n);

    int prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
        break; 
        }
    }

    if(prime==0){
        printf("Not Prime\n");
    }
    else{
        printf("Prime\n");
    }
    return 0;

}