// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main(){

    int n,r,r1,a,b;
    int i=0;

    printf("Enter any number: \n");
    scanf("%d",&n);

    int m=n;
    int k=n;

      r=n%10;

    while(n>0){
        n=n/10;
        i++;
    }
    while(m>0){
        r1=m%10;
        m=m/10;
    }
    int r2=r1;
    for(int j=1;j<i;j++){
        r1=r1*10;
    }
   a=k-r1;
   b=(a-r)/10;
   for(int l=1;l<i;l++){
    r=r*10;
   }

   printf("Number after swaping first and last digit: %d\n",(r+b*10+r2)); 

   return 0;
}
