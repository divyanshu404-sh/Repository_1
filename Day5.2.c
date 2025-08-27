// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
 int main(){

    int seconds;
    
    printf("Enter time in seconds:\n");
    scanf("%d",&seconds);
    
    int h = seconds/3600;
    int m = (seconds%3600)/60;
    int s = (seconds%3600)%60;

    printf("Time is %d:%d:%d",h,m,s);

    return 0;
 }