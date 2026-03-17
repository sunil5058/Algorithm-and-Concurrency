#include <stdio.h>

int main() {
    int i;

    printf("Even Numbers:\n");
    for(i = 1; i <= 100; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }

    printf("\nOdd Numbers:\n");
    for(i = 1; i <= 100; i++) {
        if(i % 2 != 0)
            printf("%d ", i);
    }

    return 0;
}