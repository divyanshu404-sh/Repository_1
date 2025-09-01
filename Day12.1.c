// Write a program to calculate a library fine based on late days.

#include <stdio.h>

int main(){

    int days;

    printf("Enter no. of late days:\n");
    scanf("%d",&days);

    if(days>=1 && days<=4){
        printf("Fine ₹%d\n",2*days);
    }

    else if(days>=5 && days<=8){
        printf("Fine ₹%d\n",4*days);
    }

    else if(days>=9 && days<=16){
        printf("Fine ₹%d\n",6*days);
    }
    else{ 
        printf("Membership Cancelled\n");
    }
    
   
    return 0;
}