#include<stdio.h>

int main(){
	
	int *arr;
	int limit, i;
	int sum = 0;
	
	printf("Enter total number of items: ");
	scanf("%d", &limit);
	
	arr= (int*)malloc(limit * sizeof(int));
	
	if(arr == NULL){
		printf("Insufficient Storage.....\n");
	}
	
	printf("Enter %d elements: ", limit);
	for(i=0; i<limit; i++){
		printf("\nEnter element no. %d: ", i+1);
		scanf("%d", (arr+i));
		sum = sum + *(arr + i);
	}
	
	printf("Array elements are: ");
	for(i=0; i<limit; i++){
		printf("%d\t", *(arr+i));
	}
	
	printf("\nSum off all elements: %d", sum);
	
	return 0;
}
