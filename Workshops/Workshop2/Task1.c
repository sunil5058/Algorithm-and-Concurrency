#include <stdio.h>

int main() {
    // Fixed array
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 2; // Number to count
    int count = 0;

    // Count occurrences
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            count++;
        }
    }

    printf("The number %d appears %d time(s) in the array.\n", num, count);

    return 0;
}