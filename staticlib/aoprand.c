int max(int* a, int n){
	int maxIndex = 0;
	int i;
	for( i = 0; i < n; i ++)
		if(a[i] > a[maxIndex])
			maxIndex = i;
	return a[maxIndex];
}

int min(int* a, int n){
	int minIndex = 0;
	int i;
	for( i = 0; i < n; i ++)
		if(a[i] < a[minIndex])
			minIndex = i;
	return a[minIndex];	
}

int sum(int* a, int n){
	int sum = 0;
	int i;
	for(i = 0; i < n; i ++)
		sum = sum + a[i];
	return sum;
}
