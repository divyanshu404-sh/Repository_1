// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main(){

    int n;
    float sum=1.0;

    printf("Enter n: \n");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
            sum=sum+(float)(2*i-1)/(2*i);
    }
    printf("Sum of the series upto %d terms is: %.4f\n",n,sum);

    return 0;
}

