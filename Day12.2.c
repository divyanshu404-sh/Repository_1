// Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main(){

    float units;

    printf("Enter number units consumed:\n");
    scanf("%f",&units);

    if(units>=0 && units<=100){
        printf("Bill: ₹%.2f",5*units);
    }

    else if(units>=101 && units<=200){
        printf("Bill: ₹%.2f",(19.0/3.0)*units);
    }

     else if(units>=201 && units<=300){
        printf("Bill: ₹%.2f",(44.0/5.0)*units);
    }
    else{
        printf("Bill: ₹%.2f",10*units);
    }

    return 0;
}