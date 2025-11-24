//Write a program to take a string s as input. The task is to find the 
//length of the longest substring without repeating characters. Print 
//the length as output.

#include <stdio.h>

int main(){

    char s[20], sub[20];

    printf("Enter the string:\n");
    scanf("%s", s);

    int max[20];
    for(int i = 0; s[i] != '\0'; i++){

        sub[0] = '\0';     
        max[i] = 0;

        
        for(int j = i + 1; s[j] != '\0'; j++){

            
            if(s[j] == s[i])
                break;

            sub[j - i] = s[j];
            max[i]++;
        }
    }

    int max2 = max[0];

    for(int i = 0; s[i] != '\0'; i++){
        if(max2 < max[i]){
            max2 = max[i];
        }
    }

    for(int i = 0; s[i] != '\0'; i++){
        if(max2 == max[i]){
            for(int m = i; m < i + max2; m++){
                printf("%c", s[m]);
            }
            break; 
        }
    }

    return 0;
}