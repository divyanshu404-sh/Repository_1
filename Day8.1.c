// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

    int main(){

        char character;

        printf("Enter any character\n");
        scanf("%c",&character);

        if(character >= 'A' && character <= 'Z'){
            printf("Uppercase alphabet\n");
        }
        else if(character >= 'a' && character <= 'z'){
            printf("Lowercase alphabet\n");
        }
        else if(character == '@' || character == '&' || character == '%' || character == '$' || character == '#' || character == '^' || character == '*'){
            printf("Special character\n");
        }
        else if(character > 0 || character<=0){
            printf("Digit\n");
        }
        
        return 0;
    }
