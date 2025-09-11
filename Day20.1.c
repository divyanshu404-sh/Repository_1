// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main(){

int n,r;
int product=1;

printf("Enter a number : \n");
scanf("%d",&n);

while(n>0){
    r=n%10;
    n=n/10;
    if(r%2!=0){
        product=product*r;
    }
}
printf("Product of odd digits is: %d\n",product);

return 0;
}