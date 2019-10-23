#include "time.h"
#include "stdlib.h"
#include "stdio.h"
void showArray(int* a, int n){
	int i;
	for(i = 0; i < n; i ++){
		printf("%d ",a[i]);	
	}
	printf("\n");
}

int* initArray(int n, int rangeL, int rangeR){
	if(rangeL > rangeR){
		return NULL;	
	}
	srand((unsigned)time(NULL));
	int *arr;
	arr = (int *)malloc(sizeof(int)*n);
	int i;
	for(i = 0; i < n; i ++){
		arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
	}
	return arr;
}
