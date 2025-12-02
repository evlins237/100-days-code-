Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    char c;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        characters++;

        if (c == '\n')
            lines++;

        if (!isspace(c) && inWord == 0) {
            inWord = 1;
            words++;
        } else if (isspace(c)) {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines + 1);

    return 0;
}
