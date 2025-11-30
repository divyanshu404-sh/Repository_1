//Write a C program that opens an existing file (e.g., info.txt) and 
//reads its contents using fgets(). The program should print all the 
//lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main(){
 
    char a[100];
    FILE *f;
    f=fopen("info.txt","r");
    if(f==NULL){
        printf("Error\n");
        return 1;
    }
    while(fgets(a,sizeof(a),f)!=NULL){
    printf("%s",a);
}

    fclose(f);
    
    return 0;
}