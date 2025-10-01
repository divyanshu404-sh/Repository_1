//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    printf("Enter an integer: ");
    scanf("%lld", &num);

    int count[10] = {0}; 
    
    if(num < 0) num = -num;


    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }


    int maxDigit = 0;
    for(int i = 1; i < 10; i++) {
        if(count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
