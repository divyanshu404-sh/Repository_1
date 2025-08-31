// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main(){

    float cp,sp;

    printf("Enter cost price:\n");
    scanf("%f",&cp);

    printf("Enter selling price:\n");
    scanf("%f",&sp);

    if(cp>sp){
        printf("Loss %.2f%%",((cp-sp)/cp)*100);
    }
    else if(sp>cp){
        printf("Profit %.2f%%",((sp-cp)/cp)*100);
    }
    else{
        printf("No profit no loss");
    }

    return 0;
}
