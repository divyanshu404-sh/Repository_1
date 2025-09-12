// Write a program to check if a number is a perfect number.

#include <stdio.h>

int main(){

    int n;
    int s=0;

    printf("Enter number: \n");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n){
        printf("Perfect Number \n");
    }
    else{
        printf("Not perfect Number\n");
    }
    return 0;
}
