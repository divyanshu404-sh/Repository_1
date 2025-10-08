//Replace spaces with hyphens in a string.

#include <stdio.h>

int main(){

    char word[20];

    printf("Enter word: \n");
    scanf("%[^\n]",word);

    int i=0;
    while(word[i]!='\0'){
        if(word[i]==' '){
            word[i]='-';
        }
        i++;
    }
    printf("%s",word);

    return 0;
}