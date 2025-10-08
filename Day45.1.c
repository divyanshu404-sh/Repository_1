//Count frequency of a given character in a string.

#include <stdio.h>

int main(){

    char word[20];

    printf("Enter word: \n");
    scanf("%s",word);

    char l;
    printf("Enter character you want to search: \n");
    scanf(" %c",&l);

    int i=0,n=0;
    while(word[i]!='\0'){
        if(word[i]==l){
            n++;
        }
        i++;
    }

    printf("%d",n);

    return 0;
}