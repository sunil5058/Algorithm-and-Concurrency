#include <stdio.h>

int main() {

    int arr[11] = {12, 45, 7, 23, 56, 9, 34, 18, 29, 41, 5};
    int i;
    int smallest, largest;
    double sum = 0, average;

    smallest = arr[0];
    largest = arr[0];

    for(i = 0; i < 11; i++) {

        if(arr[i] < smallest) {
            smallest = arr[i];
        }

        if(arr[i] > largest) {
            largest = arr[i];
        }

        sum = sum + arr[i];
    }

    average = sum / 11;

    printf("Smallest value: %d\n", smallest);
    printf("Largest value: %d\n", largest);
    printf("Average value: %.2lf\n", average);

    return 0;
}