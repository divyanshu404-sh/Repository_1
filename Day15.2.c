// Write a program to reverse a given number.

#include <stdio.h>

int main(){

    int n,r;

    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Reverse of %d is: ",n);

      while(n>0){  
        r=n%10;
        n=n/10;

        printf("%d",r);
    }

    return 0;

}