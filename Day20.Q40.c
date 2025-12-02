Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100], onesComplement[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            onesComplement[i] = '1';
        } else if (binary[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Invalid binary number.\n");
            return 1;
        }
    }
    onesComplement[length] = '\0'; 

    printf("%s\n", onesComplement);

    return 0;
}
