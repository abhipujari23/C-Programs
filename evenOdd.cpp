#include<stdio.h>

int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	if(num == 0)
		printf("\n You have entered 0.");
	else if(num%2 == 0)
		printf("\n You have entered Even Number."); 
	else
		printf("\n You have entered Odd Number.");
	
	return 0;
}
