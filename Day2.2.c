// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main(){

     float radius;

     printf("Enter radius of the circle: \n");
     scanf("%f", &radius);
     
     printf("Area and circumference of circle are %f and %f respectively",(3.14*radius*radius),(2*3.14*radius));

     return 0;
}