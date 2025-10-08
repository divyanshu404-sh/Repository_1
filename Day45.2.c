//Toggle case of each character in a string.

#include <stdio.h>

int main(){

    char word[20];

    printf("Enter word: \n");
    scanf("%s",word);

    int i=0;
    while(word[i]!='\0'){
        if(word[i]>='A' && word[i]<='Z'){
            word[i]=word[i]+32;
        }
        else if(word[i]>='a' && word[i]<='z'){
            word[i]=word[i]-32;
        }
        i++;
    }
    printf("%s",word);

    return 0;
}