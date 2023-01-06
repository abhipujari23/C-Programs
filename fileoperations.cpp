//reading from file
#include<stdio.h>
int main(){
	FILE *fp;
	int mc = 100;
	char str[100];
	fp = fopen("F:/test.txt", "r");
	
	if(fp==NULL){
		printf("File Not Found.\n");
	}
	else{
		
		printf("Reading file............\n");
		
		while(fgets(str, mc,fp)!= NULL)
		{
			printf("%s", str);
		}
		
		fclose(fp);
		
	}
	
}
