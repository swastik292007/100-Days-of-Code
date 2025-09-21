/*Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; // to store frequency of digits 0–9
    int digit, i, maxDigit = 0;
    
    // Input number
    printf("enter the num: ");
    scanf("%lld", &num);
    
    // Count digit occurrences
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    
    // Find digit with maximum frequency
    for(i = 1; i < 10; i++) {
        if(count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }
    
    printf("%d", maxDigit);
    
    return 0;
}
