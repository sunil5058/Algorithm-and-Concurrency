#include<stdio.h>

int main(){
	int input,cost,change;
	printf("Enter money in pence :");
	scanf("%d",&input);
	printf("Enter the cost of product in pence:");
	scanf("%d",&cost);
	
	change=input-cost;
	
	int cost200=change/200;
	change=change%200;
	
	int cost100=change/100;
	change=change%100;
	
	int cost50=change/50;
	change=change%50;
	
	int cost20=change/20;
	change=change%20;
	
	int cost10=change/10;
	change=change%10;
	
	int cost5=change/5;
	change=change%5;
	
	int cost2=change/2;
	change=change%2;
	
	int cost1=change;
	
	printf("%d",cost200);
	printf("%d",cost100);
	printf("%d",cost50);
	printf("%d",cost20);
	printf("%d",cost10);
	printf("%d",cost5);	
	printf("%d",cost2);
	printf("%d",cost1);
	
	

}