#include "staticlib.h"
#include "stdio.h"
int main(){
	int n =10;
	int *arr = initArray(n,0,20);
	showArray(arr,10);
	printf("maxNum: %d \n",max(arr, n));
	printf("Sum: %d \n",sum(arr, n));
}
