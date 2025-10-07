//Print each character of a string on a new line.

#include <stdio.h>

int main(){

    char word[20];

    printf("Enter word: \n");
    scanf("%s",word);

    int i=0;
    while(word[i]!='\0'){
        printf("%c\n",word[i]);
        i++;
    }

    return 0;
}