// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main(){

    int n,r;

    printf("Enter n:\n");
    scanf("%d",&n);

    int k=0;
    int orgn=n;
    while(n>0){
        r=n%10;
        n=n/10;
        k=k+r;
    }
    printf("Sum of digits of %d is %d",orgn,k);
    return 0;
}