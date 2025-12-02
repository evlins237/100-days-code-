Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    scanf("%s", date);  

    int day, month, year;
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("%02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}

