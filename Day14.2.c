// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main(){

int n,product=1;

printf("Enter n:\n");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid Input");
    }
    else{
         for(int i=2;i<=n;i+=2){
            product = product * i;
         }
         printf("Prouct of even numbers from 1 to %d is:%d\n",n,product);
    }
    return 0;
}

