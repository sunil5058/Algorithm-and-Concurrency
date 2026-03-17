#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-3): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        default:
            printf("Invalid");
    }

    return 0;
}