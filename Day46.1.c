// Remove all vowels from a string.

#include <stdio.h>

int main(){

    char word[20];

    printf("Enter the string:\n");
    scanf("%s",word);

    int i=0;
    flag:
    while(word[i]!='\0'){
        if(word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U' || word[i]=='a' 
            || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
            {
                for(int j=i;word[j]!='\0';j++){
                word[j]=word[j+1];
                }
                goto flag;
            }
            i++;
    }
    printf("%s",word);

    return 0;

}