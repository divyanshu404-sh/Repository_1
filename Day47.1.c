//Check if two strings are anagrams of each other.

#include <stdio.h>

int main(){

    char word1[20],word2[20];

    printf("Enter string1:\n");
    scanf("%s",word1);

    printf("Enter string2:\n");
    scanf("%s",word2);

    for(int i=0;word1[i]!='\0';i++){
        for(int j=0;word2[j]!='\0';j++){
            if(word1[i]==word2[j]){
                word2[j]='#';
                word1[i]='#';
            }
        }
    
    }
    int flag=0;
    for(int i=0;word1[i]!='\0';i++){
        if(word1[i]!=word2[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("NOT Anagram\n");
    }
    else{
        printf("Anagram\n");
    }

    return 0;
}
