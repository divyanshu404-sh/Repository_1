// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main(){

    int z;

    printf("Enter any integer: \n");
    scanf("%d",&z);

    if(z>=0){
        if(z==0){
            printf("Your entered number is 0");
        }
        else{
            printf("Your entered number is positive");
        }}
        else{
            printf("Your entered number is negative");
        }

        return 0;
}