// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main(){

    int y;

    printf("Enter the year:\n");
    scanf("%d",&y);

    if(y%4==0 && y%100!=0){
        printf("This year is leap year");
    }
    else if(y%400==0){
        printf("This year is leap year");
    }
    else{
        printf("This year is not leap year");
    }

    return 0;
}