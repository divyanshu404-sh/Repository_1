// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main(){

    int n,r;
    int reverse=0;

    printf("Enter n:\n");
    scanf("%d",&n);

    int original_n=n;
    while(n>0){    
    r=n%10;
    n=n/10;
    reverse=r+reverse*10;
}
if(original_n==reverse){
    printf("palindrome");
}
else{
    printf("Not palindrome");
}
return 0; 
}