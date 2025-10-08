//Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main(){

    char word[20];

    printf("Enter word: \n");
    scanf("%[^\n]",word);

    int i=0,d=0,c=0,s=0;
    while(word[i]!='\0'){
        if(word[i]==' '){
            s++;
        }
        else if(word[i]>='0' && word[i]<='9'){
                d++;
            }
            else if(word[i]=='@' || word[i]=='#' || word[i]=='$' ||
                    word[i]=='%' || word[i]=='&' ||word[i]=='*'){
                c++;
            }
        i++;
    }
    printf("spaces = %d, Digits = %d, Special = %d \n",s,d,c);
    return 0;
}
    