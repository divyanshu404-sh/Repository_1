//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main(){

    char word[30];

    printf("Enter word: \n");
    scanf("%s",word);

    int i=0;
    while(word[i]!='\0'){
        int ch=word[i];
        if(ch>='a' && ch<='z'){
            word[i]=word[i]-32;
        }
        i++;
    }
    printf("%s\n",word);

    return 0; 

}