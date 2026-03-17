#include<stdio.h>
void sumNum(int a , int b){
    int sum = a + b;
    printf("The sum of %d and %d is %d", a, b, sum);

    
}
int main(){
    sumNum(5,10);
    return 0;   
}