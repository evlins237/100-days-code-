Q23: Write a program to calculate a library fine based on late days.

#include <stdio.h>

int main() {
    int days, fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 1;   
        printf("Fine ₹%d\n", fine);
    }
    else if (days <= 10) {
        fine = days * 4;   
        printf("Fine ₹%d\n", fine);
    }
    else if (days <= 30) {
        fine = days * 6; 
        printf("Fine ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}

