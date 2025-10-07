//Check if a string is a palindrome.

#include <stdio.h>

int main(){

    char word[20];

    printf("Enter word: \n");
    scanf("%s",word);

    int n=0;
    while(word[n]!='\0'){
        n++;
    }
    int flag=1;
    for(int i=0;i<n/2;i++){
        if(word[i]==word[n-1-i] || word[i]==word[n-1-i]+32 || word[i]==word[n-1-i]-32){
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Palindrome\n");
    }
    else{
        printf("NOT palindrome");
    }

    return 0;
}