// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main(){

    int n,sum=0,i=1;

    printf("Enter n:\n");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid Input");
    }
    else{
    for(i=1;i<2*n;i+=2){
        sum = sum + i;
    }
        printf("Sum of first %d odd numbers is: %d",n,sum);
}
        return 0;
    
}
 