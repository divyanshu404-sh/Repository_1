//Write a program to take an input array of size n. The array should 
//contain all the integers between 0 to n except for one. Print that 
//missing number

#include <stdio.h>

int main(){

    int n;

    printf("Enter n:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elemnets of array(integers from 0 to n(not in order)):\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int sum=n*(n+1)/2;
int act_sum=0;

for(int i=0;i<n;i++){
    act_sum=act_sum+arr[i];
}
printf("Missing no. is = %d\n",sum-act_sum);

return 0;

}
