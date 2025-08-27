// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main(){

    float p,r,t;

    printf("Enter principal,rate and time respectively:\n");
    scanf("%f %f %f",&p,&r,&t);

    printf("Simple interest for given information is %f\n",(p*r*t)/100);
    printf("Compound interest for given information is %f\n",p*pow((1+(r/100)),t)-p);
    return 0;
    
}
