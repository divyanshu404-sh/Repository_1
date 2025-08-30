// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main(){

    float A,B,C;

    printf("Enter side_1:\n");
    scanf("%f",&A);

    printf("Enter side_2:\n");
    scanf("%f",&B);

    printf("Enter side_3:\n");
    scanf("%f",&C);

    if(A==B && B==C){
        printf("Equilateral\n");
    }
    else if(A==B || B==C){
        printf("Isosceles\n");
    }
    else{
        printf("Scalene");
    }

    return 0;
}

