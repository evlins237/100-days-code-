Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int number, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        int digit = number % 10;

        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }

        number = number / 10;
    }

    if (hasOdd == 0) {
        product = 1;
    }

    printf("%d\n", product);

    return 0;
}

