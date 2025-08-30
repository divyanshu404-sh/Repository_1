// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main(){

    float a,b,c;

    printf("Enter three number_1:\n");
    scanf("%f",&a);

    printf("Enter three number_2:\n");
    scanf("%f",&b);

    printf("Enter three number_3:\n");
    scanf("%f",&c);

    if(a>b && a>b){
        printf("%f is largest\n",a);
    }
    else if(b>a && b>c){
        printf("%f is largest\n",b);
    }
    else if(a==b && b==c){
        printf("All are equal");
    }
    else{
        printf("%f is largest\n",c);
    }

    return 0;
}