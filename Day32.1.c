//Merge two arrays.

#include <stdio.h>

int main(){

    int n,m;
    printf("Enter size of first array: \n");
    scanf("%d",&n);

    printf("Enter size of second array: \n");
    scanf("%d",&m);
int arr1[n],arr2[m]; 

printf("For first array\n");
for(int i=0;i<n;i++){
    printf("Enter element of index %d: \n",i);
    scanf("%d",&arr1[i]);
}

printf("For second array\n");
for(int i=0;i<m;i++){
    printf("Enter element of index %d: \n",i);
    scanf("%d",&arr2[i]);
}
int merged_arr[m+n];
for(int i=0;i<n;i++){
    merged_arr[i]=arr1[i];
}
for(int i=0;i<m;i++){
    merged_arr[n+i]=arr2[i];
}

for(int i=0;i<(m+n);i++){
    printf("%d ",merged_arr[i]);
}

return 0;
 
}
