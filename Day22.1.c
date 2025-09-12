// Write a program to check if a number is a strong number.

#include <stdio.h>

int main(){

    int n,r;
    int i=1;
    int fact;
    int sum=0;

    printf("Enter number: \n");
    scanf("%d",&n);

    int m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        fact=1;
        for(i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;
    }
   
    if(sum==m){
        printf("Strong number\n");
    }
    else{
        printf("Not strong number\n");
    }
    return 0;
}