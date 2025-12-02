Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int number, temp, digits = 0, firstDigit, lastDigit, swappedNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    lastDigit = temp % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    firstDigit = temp;

    if (digits == 0) {
        swappedNumber = number;
    } else {
     
        int middlePart = number % (int)pow(10, digits) / 10;

        swappedNumber = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;
    }

    printf("%d\n", swappedNumber);

    return 0;
}


