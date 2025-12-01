//Ask the user for a filename. Check if it exists by trying to open it 
//in read mode. If the file pointer is NULL, print an error message; 
//otherwise, read and display its content.

#include <stdio.h>

int main(){

    char file[20];
    char con[100];

    printf("Enter file name:\n");
    scanf("%s",file);

    FILE *fl;
    fl=fopen(file,"r");
    if(fl==NULL){
        printf("Error opening the file.\n");
        return 1;
    }
    while(fgets(con,sizeof(con),fl)!=NULL){
        printf("%s",con);
    }
    fclose(fl);

    return 0;
}