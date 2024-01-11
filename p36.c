#include <stdio.h>

int isBissextileYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Common year
    }
}

int main() {
    int year;

    // Input year from the user
    while(scanf("%d", &year) != EOF)
        if (isBissextileYear(year)) {
            printf("Bissextile Year\n");
        } else {
            printf("Common Year\n");
        }

    return 0;
}
