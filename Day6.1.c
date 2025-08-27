// Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main(){

  int z;
  
  printf("Enter any integer: \n");
  scanf("%d",&z);

  if(z%2==0){
    printf("%d is even",z);
  }

  else{
    printf("%d is odd",z);
  }

  return 0;
}
