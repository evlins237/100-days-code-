Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        sum += number % 10;  
        number = number / 10; 
    }

    printf("%d\n", sum);

    return 0;
}
