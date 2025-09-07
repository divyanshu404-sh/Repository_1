// Write a program to find the HCF (GCD) of two numbers.

 #include <stdio.h>

int main(){

    int a,b;

    printf("Enter a:\n");
    scanf("%d",&a);

    printf("Enter b:\n");
    scanf("%d",&b);
      
      int orga=a;
      int orgb=b;
    
        while(b!=0){
        int c=b;
        b=a%b;
        a=c;
    }
    
    printf("HCF(GCD) of %d & %d is: %d",orga,orgb,a);
    
     
    return 0;
}
