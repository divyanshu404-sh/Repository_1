//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main(){

    char str1[20],str2[20];

    printf("Enter sstring 1:\n");
    scanf("%s",str1);

     printf("Enter sstring 2:\n");
     scanf("%s",str2);

     int flag=0,flag2=0,rot;
        for(int j=0;str2[j]!='\0';j++){
            if(str2[j]==str1[0]){
            flag=1;
            rot=j;
            break;
        }
        }
        int l=strlen(str1);
        printf("rot=%d\nlen=%d\n",rot,l);
        if(flag==1){
            for(int i=0;i<rot;i++){
                if(str2[i]!=str1[i+l-rot]){
                    flag2=1;
                    break;
                }
            }
                for(int i=l-1;i>=rot;i--){
                    if(str2[i]!=str1[i-rot]){
                        flag2=2;
                        break;
                    }
                }
            
        }
        else{
            flag2=3;
            printf("Not Rotation\n");
        }
        if(flag2==1 || flag2==2 || flag2==3){
            printf("Not Rotation\n");
        }
        else{
            printf("Rotational\n");
        }
     
        return 0;
}