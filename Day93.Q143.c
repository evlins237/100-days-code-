Q143: Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[100];
    int n, i, maxIndex = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("Topper: %s (Marks: %d)", s[maxIndex].name, s[maxIndex].marks);

    return 0;
}
