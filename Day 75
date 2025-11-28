Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(line, sizeof(line), stdin);

    fputc('\n', fp);
    fputs(line, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
