// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char bin[1024];

    printf("Enter a binary number: ");
    scanf("%1023s", bin);   

    printf("1's Complement: ");
    for (int i = 0; i < strlen(bin); i++) {
        if (bin[i] == '0'){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
 
    return 0;
}