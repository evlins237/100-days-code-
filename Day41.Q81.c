Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads string including spaces
    while (str[count] != '\0') {
        count++;
    }

    if (str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}

