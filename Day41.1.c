//Count characters in a string without using built-in length functions.

#include <stdio.h>

int main(){
    char word[20];

    printf("Enter the word: \n");
    scanf("%s",word);

    int i=0;
    while(word[i]!='\0'){
        i++;
    }
    printf("Number of characters = %d\n",i);

    return 0;
}