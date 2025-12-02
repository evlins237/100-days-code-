Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);  
    
    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0'; 

    char *token = strtok(name, " ");
    char initials[50] = "";
    char surname[50] = "";

    while (token != NULL) {
        strcpy(surname, token);  
        token = strtok(NULL, " ");
        if (token != NULL) {
            char ch[4];
            sprintf(ch, "%c.", surname[0]);  
            strcat(initials, ch);
        }
    }

    printf("%s %s\n", initials, surname);
    return 0;
}
