//Read a text file and count the total number of characters, words, and 
//lines. A word is defined as a sequence of non-space characters 
//separated by spaces or newlines.

#include <stdio.h>

int main(){

    char a[200];
    int ar=0,b=1,c=0;
    FILE *f;
    f = fopen("sample.txt","r");
    if(f==NULL){
        printf("Error\n");
        return 1;
    }
    while(fgets(a,sizeof(a),f)!=NULL){
        for(int i=0;a[i]!='\0';i++){
            ar++;
        if(a[i]==' '){
            b++;
        }
        else if(a[i]=='.'){
            c++;
        }
    }
    }
    printf("charaters = %d\nword = %d\nsentence = %d\n",ar,b,c);
    fclose(f);

    return 0;
}