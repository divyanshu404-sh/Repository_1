//Write a program to take two strings s and t as inputs (assume all 
//characters are lowercase). The task is to determine if s and t are 
//valid anagrams, meaning they contain the same characters with the 
//same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main(){

    char s[20], t[20];

    printf("Enter s:\n");
    scanf("%s", s);

    printf("Enter t:\n");
    scanf("%s", t);

    int anagram = 1;

    if(strlen(s) != strlen(t)){
        printf("NOT Anagram\n");
        return 0;
    }

    for(int i = 0; s[i] != '\0'; i++){
        int res = 1;

        for(int j = i + 1; s[j] != '\0'; j++){
            if(s[i] == s[j]){
                res++;
            }
        }

        int ret = 0;
        for(int k = 0; t[k] != '\0'; k++){
            if(t[k] == s[i]){
                ret++;
            }
        }

        if(res != ret){
            anagram = 0;
        }
    }

    if(anagram == 1){
        printf("Anagram\n");
    } else {
        printf("NOT Anagram\n");
    }

    return 0;
}