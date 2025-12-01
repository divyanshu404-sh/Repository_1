//Open an existing file in append mode and allow the user to enter a 
//new line of text. Append the text at the end without overwriting 
//existing content.

#include <stdio.h>

int main(){

    FILE *fp;
    char line[200];

    printf("Enter a new line:\n");
    fgets(line,sizeof(line),stdin);

    fp = fopen("sample.txt","a");
    fputs(line,fp);
    fclose(fp);

    return 0;
}