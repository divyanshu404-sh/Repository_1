//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main(){

    char date[12];

    printf("Enter Date of fourth month(dd/mm/yyyy):\n");
    fgets(date,sizeof(date),stdin);

     date[strcspn(date,"\n")]='\0';

    int i=0;
        while(date[i]!='/'){
            printf("%c",date[i]);
            i++;
        }
        printf("-Apr-");
        for(int i=6;i<10;i++){
            printf("%c",date[i]);
        }

    return 0;
}