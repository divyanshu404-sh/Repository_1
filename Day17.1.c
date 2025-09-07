//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main(){

    int n,r;
    int i=0;
    int k=0;

    printf("Enter n:\n");
    scanf("%d",&n);

    int org1=n;
    int org2=n;
    while(n>0){
        n=n/10; 
        i++;
    }
    while(org1>0){
        r=org1%10;
        org1=org1/10;
        k=k+pow(r,i);
    }
    if(k==org2){
    printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }

    return 0;
} 