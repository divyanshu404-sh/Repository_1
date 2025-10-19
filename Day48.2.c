//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>


int main(){

char line[100];
printf("Enter sentence:\n");
fgets(line,sizeof(line),stdin);

//tackling new line through fgets.
line[strcspn(line, "\n")] = '\0';

 int n=0;
 while(line[n]!='\0'){
     n++;
 }
 for(int i=0;i<=n;i++){
     if(line[i]==' ' || line[i]=='\0'){
         printf(" ");
       for(int j=i-1;line[j]!=' ' && j>=0;j--){
             printf("%c",line[j]);
         }
     }
 }
return 0;
}