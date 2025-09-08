// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main(){

    int a,b;

    printf("Enter a:\n");
    scanf("%d",&a);

    printf("Enter b:\n");
    scanf("%d",&b);
    int multp_a=a;
    int multp_b=b; 
    int i=1;
     int j=1;
    while(1){
        multp_a=a*i;
        multp_b=b*j;
            if(multp_a==multp_b){
                printf("LCM of %d & %d is: %d",a,b,multp_a);
                break;
            }
            else if(multp_a < multp_b){
                i++;
            }
            else{
                j++;
            }
        }
    return 0;
}