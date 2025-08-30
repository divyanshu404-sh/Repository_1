// Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main(){

    float percentage;

    printf("Enter percentage marks\n");
    scanf("%f",&percentage);

    if(percentage>=90){
        printf("Grade A\n");
    }
    else if(percentage<=90 && percentage>80){
        printf("Grade B\n");
    }
    else if(percentage<=80 && percentage>70){
        printf("Grade c\n");
    }
    else if(percentage<=70 && percentage>60){
        printf("Grade D\n");
    }
    else if(percentage<=60 && percentage>50){
        printf("Grade E\n");
    }
    else if(percentage<=50 && percentage>40){
        printf("Grade F\n");
    }
    else{
        printf("FAIL");
    }

    return 0;
}
