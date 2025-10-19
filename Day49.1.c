//Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main(){

    char name[50];

    printf("Emter name:\n");
    fgets(name,sizeof(name),stdin);

    name[strcspn(name,"\n")]='\0';

    printf("%c.",name[0]);
    for(int i=0;i<strlen(name);i++){
      if(name[i]==' '){
        printf("%c.",name[i+1]);
      }
    }

  return 0;
}