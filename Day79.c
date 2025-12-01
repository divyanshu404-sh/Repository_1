// file numbers.txt contains a list of integers separated by spaces. 
//Read all integers, compute their sum and average, and print both

#include <stdio.h>

int main(){

    int num,sum=0,count=0;
    FILE *nu;

    nu=fopen("numbers.txt","r");
    if(nu==NULL){
        printf("Error\n");
        return 1;
    }
        while(fscanf(nu,"%d", &num)==1){
            sum+=num;
            count++;
        }
    fclose(nu);

    float avg=sum/count;
    printf("Sum = %d\n",sum);
    printf("Average = %.2f",avg);

    return 0;
}