//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yy;

    fgets(date, sizeof(date), stdin);

    sscanf(date, "%d/%d/%d", &dd, &mm, &yy);

    // Assuming mm is always 04 (as question says)
    printf("%02d-Apr-%d", dd, yy);

    return 0;
}
