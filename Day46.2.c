//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main(){

    char word[20];

    printf("Enter string: \n");
    scanf("%s",word);

    int i=0;
    int m=-1;
   while(word[i]!='\0'){
   if(word[i]>='a' && word[i]<='z'){
        for(int j=(i+1);word[j]!='\0';j++){
            if(word[j]==word[i]){
               m=i;
               break;
            }
        }

    }
    i++;
}
if(m!=-1){
printf("%c\n",word[m]);
}
else{
    printf("No repeating lowercase character found\n");
}
    return 0;
} 