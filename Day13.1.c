// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main(){

    int a,b;
    char sym;

    printf("Enter a:\n");
    scanf("%d",&a);

    printf("Enter b:\n");
    scanf("%d",&b);

    printf("Enter operator:\n");
    scanf(" %c",&sym);

    switch(sym) {

        case '+':
        printf("a + b = %d\n",a+b);
        break;

        case '-':
        printf("a - b = %d\n",a-b);
        break;

        case '*':
        printf("a * b = %d\n",a*b);
        break;

        case '/':
        printf("a / b = %d\n",a/b);
        break;

        case '%':
        printf(" Remainder of a/b = %d\n",a % b);
        break;

        default:
        printf("Invalid operator");
    }

    return 0;

}
