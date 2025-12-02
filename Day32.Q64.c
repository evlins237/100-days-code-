Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; // Array to store frequency of digits
    int maxCount = 0, mostFrequentDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    long long temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", mostFrequentDigit);

    return 0;
}
