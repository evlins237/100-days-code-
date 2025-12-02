Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[100], word[100];
    int i, len, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  

    sentence[strcspn(sentence, "\n")] = '\0'; 

    int start = 0, end = 0;
    while (1) {
        if (sentence[end] != ' ' && sentence[end] != '\0') {
            end++;
        } else {
            len = end - start;
            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &sentence[start], len);
                longest[len] = '\0'; 
            }
            if (sentence[end] == '\0')
                break;
            end++;
            start = end;
        }
    }

    printf("%s\n", longest);
    return 0;
}
