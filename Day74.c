//Take two filenames from the user – a source file and a destination 
//file. Copy all the content from the source file to the destination
//file using fgetc() and fputc().

#include <stdio.h>

int main(){

    char src[50],dest[50],content[200];
    FILE *fs,*fd;

    printf("enter source file:\n");
    scanf("%s",src);
    printf("enter dest. file:\n");
    scanf("%s",dest);

    fs = fopen(src,"r");
    fd = fopen(dest,"w");

    if(fs==NULL || fd==NULL){
        printf("Error\n");
        return 1;
    }
    
    while(fgets(content,sizeof(content),fs)!=NULL){
        fputs(content,fd);
    }
    
return 0;
}