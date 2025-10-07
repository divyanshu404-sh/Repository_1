//Count vowels and consonants in a string.


#include <stdio.h>

int main(){

    char word[20];

    printf("Enter word: \n");
    scanf("%s",word);

    int c=0,v=0,i=0;
    while(word[i]!='\0'){
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || 
            word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' 
            || word[i]=='O' || word[i]=='U'){
            v++;
        }
        else{
            c++;
        }
        i++;
    }
    printf("Vowel = %d, Consonant = %d\n",v,c);

    return 0;
}