#include <stdio.h>

int main() {
    int num, i, isPrime;

    while(1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        isPrime = 1;

        if(num <= 1) {
            isPrime = 0;
        }

        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime) {
            printf("%d is a Prime Number\n", num);
            break;
        } else {
            printf("%d is not a Prime Number. Try again.\n", num);
        }
    }

    return 0;
}