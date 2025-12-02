Q97: Print the initials of a name.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);

    for (int i = 0; i < len; i++) {
      
        if (i == 0 || name[i-1] == ' ') {
            printf("%c.", toupper(name[i]));
        }
    }

    printf("\n");
    return 0;
}

