// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main(){

    char l;

    printf("Enter letter:\n");
    scanf("%c",&l);
     
    if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u' || l=='A' || l=='E' || l=='I' || l=='O' || l=='U'){
        printf("Your character is vowel");
    }
    else{
        printf("Your charcter is consonant");
    }

    return 0;

}