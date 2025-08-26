// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main(){
    float a,b;
    printf("Enter 1st number: \n");
    scanf("%f",&a);

    printf("Enter 2nd number: \n");
    scanf("%f",&b);

    printf("Sum of these two numbers is %f\n", a+b);
    if(a>=b){
    printf("Difference of these two numbers is %f\n", a-b);
    }
    else{
        printf("Diference of these two numbers is %f \n", b-a);
    }
    printf("Product of these two numbers is %f\n", a * b);

    if(b==0){
        printf("denominator can't be zero");
    }
    else{
    printf("Quotient of these two numbers (a/b) is %f\n", a / b);
    }

    return 0;
}

