//Write a program that reads text from input.txt, converts all lowercase
//letters to uppercase, and writes the result to output.txt

#include <stdio.h>

int main(){

    char cont[100];
    FILE *fi,*fo;

    fi=fopen("input.txt","r");
    fo=fopen("output.txt","w");
    if(fi==NULL || fo==NULL){
        printf("Error\n");
    }

    while(fgets(cont,sizeof(cont),fi)!=NULL){
        for(int i=0;cont[i]!='\0';i++){
            if(cont[i]>=97 && cont[i]<=122){
                cont[i]=cont[i]-32;
            }
        }
        fputs(cont,fo);
    }

    return 0;
}