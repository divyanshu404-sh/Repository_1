// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){

    float length,breadth;

    printf("Enter length of rectangle:\n");
    scanf("%f", &length);

    printf("Enter breadth of rectangle:\n");
    scanf("%f", &breadth);

    printf("Area and perimeter of rectangle are %f and %f respectively", (length*breadth),(2*(length+breadth)));

    return 0;
}