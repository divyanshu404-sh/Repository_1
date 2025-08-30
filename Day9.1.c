// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c;

    printf("Enter coefficient of x^2: \n");
    scanf("%f",&a);

    printf("Enter coefficient of x: \n");
    scanf("%f",&b);

    printf("Enter constant: \n");
    scanf("%f",&c);

    float X_1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    float X_2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);

    if(((b*b)-(4*a*c))<0){
       printf("Roots are complex\n"); 
    }
   else if(X_1==X_2){
        printf("Roots are real and same: %f",X_1);
    }
    else{
        printf("Roots are diffrent: %f, %f",X_1,X_2);
    }

    return 0;

}
