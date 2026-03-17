#include <stdio.h>
int linearSearch(int arr[],int n, int key){
	for (int i=0;i<n;i++){
	if (arr[i]==key){
	return i;
	
	}
    }
    return -1;
}
int main(){
int arr[] = {5, 3, 7, 1, 4};
int n = sizeof(arr)/sizeof(arr[0]);
int key=7;

int result=linearSearch(arr,n,key);
if(result !=-1){
	printf("Number %d found index %d\n",key,result);
	}
else{
	printf("Number %d not found in the array\n",key);
}
return 0;