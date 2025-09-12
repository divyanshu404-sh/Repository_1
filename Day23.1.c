// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main(){

    int n;
    float sum=0.0;

    printf("Enter n: \n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum = sum + (float)(2*i)/(3+(i-1)*4);
    }
    printf("Sum of series upto %d terms is: %.4f\n",n,sum);

    return 0;

}