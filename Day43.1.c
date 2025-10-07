//Reverse a string.

#include <stdio.h>

int main(){

    char word[20];

    printf("Enter word: \n");
    scanf("%s",word);

    int n=0;
    while(word[n]!='\0'){
        n++;
    }
    int temp;
    for(int i=0;i<n/2;i++){
        temp=word[i];
        word[i]=word[n-1-i];
        word[n-1-i]=temp;
    }
    printf("%s",word);
    
    return 0;
}