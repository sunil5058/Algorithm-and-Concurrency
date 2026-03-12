#include <stdio.h>
void main(){
	int percentage[]={50,60,-1,70,101,0,30};
	int i;
	
	for(i=0;i<(sizeof(percentage)/sizeof(int));i++){
		int j=percentage[i];
		if (j>=90 && j<=100){
			printf("The person get the A+ grade\n");
		}
		else if (j>=80 && j<90){
			printf("The person get the A grade\n");
		}
		 else if (j>=70 &&j<80){
			printf("The person get B+ grade\n");
		}
		else if (j>=60 &&j<70){
			printf("The person get B grade\n");
		}
		else if (j>=50 &&j<60){
			printf("The person get C+ grade\n");
		}
		else if (j>=40 &&j<50){
			printf("The person get C grade\n");
		}
		else if (j>=0 &&j<40){
			printf("The person get Fail grade\n");
		}
		else{
			printf("Invalid number\n");
		}
   	 }

}