//writing into file

#include<stdio.h>
int main(){
	FILE *fp;
	char str[100];
	int i, mc = 100;
	
	fp = fopen("F:/test1.txt", "w");
	
	for(i=0; i<5; i++){
		fprintf(fp, "This is line no. %d.\n", i+1);
	}
	printf("Writing successful!");
	fclose(fp);
}
