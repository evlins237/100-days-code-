Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc()

#include <stdio.h>

int main() {
    char src[100], dest[100];
    FILE *fs, *fd;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", src);
    printf("Enter destination file name: ");
    scanf("%s", dest);

    fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Source file not found\n");
        return 1;
    }

    fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Cannot create destination file\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s\n", dest);

    return 0;
}
