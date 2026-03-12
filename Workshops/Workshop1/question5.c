#include<stdio.h>
void calcMidpoint(int x1, int y1, int x2, int y2) {
    int midX = (x1 + x2) / 2;
    int midY = (y1 + y2) / 2;
    printf("Midpoint: (%d, %d)\n", midX, midY);
}

void main(){
    calcMidpoint(2, 3, 4, 5);
}