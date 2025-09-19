//Count positive, negative, and zero elements in an array.

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
    int p=0,ne=0,z=0;

    for(int i=0;i<n;i++){
        if(num[i]>0){
            p++;
        }
        else if(num[i]<0){
            ne++;
        }
        else{
            z++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d \n",p,ne,z);

    return 0;
}