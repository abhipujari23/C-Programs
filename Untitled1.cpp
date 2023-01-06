#include<sidio.h>
int main()
{
	int n, i, *ipt, m, sum = 0;
	printf("Enter size of array: ");
	
	scanf("%d", &n);
	
	ipt = (int*)malloc(n*sizeof(int));
	printf("Address of allocated memory by malloc function: ");
	
	for(i=0; i<n; i++){
		printf("%u \t", ipt+i);
	}
	
	printf("\n **********************************");
	
	scanf("%d", &m);
	
	ipt = realloc(ipt, m);
	
	printf("New Address of allocated memory by malloc function: ");
	
	for(i=0; i<m; i++){
		printf("%u \t", ipt+i);
	}
	
	printf("\n **********************************");
	
	printf("\n Enter elements of array: \n");
	
}
