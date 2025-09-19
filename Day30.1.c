//Count even and odd numbers in an array.

#include <stdio.h>

int main(){

    int n;

    printf("Enter number of elements in array: \n");
    scanf("%d",&n);
    
    int num[n];

    for(int i=0;i<n;i++){
        printf("Enter element no. %d: \n",i);
        scanf("%d",&num[i]);
    }
    int a=0,b=0;

    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            a++;
        }
        else{
            b++;
        }
    }
    printf("Even=%d, Odd=%d \n",a,b);

    return 0;
}