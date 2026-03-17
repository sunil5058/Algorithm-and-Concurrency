#include <stdio.h>

int main() {
    int a = 5, b = 10, sum1;
    int x, y, sum2;

    // Static addition
    sum1 = a + b;
    printf("Static Sum = %d\n", sum1);

    // Dynamic addition
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    sum2 = x + y;
    printf("Dynamic Sum = %d", sum2);

    return 0;
}