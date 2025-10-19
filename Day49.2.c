//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main(){

    char name[50];

    printf("Enter Name:\n");
    fgets(name,sizeof(name),stdin);

    name[strcspn(name,"\n")]='\0';
    
    int a=0,b,l;
    while(name[a]!=' '){
        a++;
    }
    printf("%c.",name[0]);
    for(int i=a+2;i<=(strlen(name));i++){
        if(name[i]==' '){
            for(int j=i-1;name[j]!=' ';j--){
                b=j;
            }
            printf("%c.",name[b]);
        }
        else if(name[i]=='\0'){
            printf(" ");
            for(int k=i-1;name[k]!=' ';k--){
                l=k;
            }
            for(int m=l;m<i;m++){
                printf("%c",name[m]);
            }
        }
    }
    return 0;
}