//Write a program to print the simple interest with values p, t, and r given by the user,
//where p is an integer, t is an integer, r is a float, and the interest is a float.

#include <stdio.h>

int main() {
    int p, t;
    float r, si;

    printf("Enter p, t, r: ");
    scanf("%d %d %f", &p, &t, &r);

    si = (p * t * r) / 100;
    printf("Simple Interest = %.2f", si);

    return 0;
}