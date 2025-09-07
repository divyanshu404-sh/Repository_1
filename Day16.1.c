// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main(){

    int n,r;

    printf("Enter n:\n");
    scanf("%d",&n);
    printf("binary of %d is:",n);

    int org1=n;
    int i=1;

    while(i<=n){
      i=2*i;
    }
    i=i/2;
   
    while(i>0){
      if(i<=n){
        printf("1");
        n=n-i;
      }
      else{
        printf("0");
      }
      i=i/2;
    }
    return 0;
  }