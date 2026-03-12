#include <stdio.h>
void main(){
	int percentage ;
	printf("Enter the percentage of the student");
	scanf("%d",&percentage);
	if (percentage>=70 && percentage<100){
		printf("The sutdent get the First grade");
		}
	else if (percentage>=60 && percentage<70){
		printf("The suudent get the second grade 2:2");
		}
	else if (percentage>=0 && percentage<60){
		printf("the student get third grade");
		}
	else{
		printf("Invalid number");
		}
};
