#include<stdio.h>
#include<string>
int main(){
	
	int ch, price;
	char choice;
	
	printf("---------- Welcome to Restaurant ----------\n");
	printf("-------------------------------------------\n");
	printf("0. Menu\n 1. Biriyani\n 2. Gulab Jamun\n 3. Raita\n 4. Bill\n");
	scanf("%d", &ch);
	printf("===========================================\n\n");
	Switch(ch){
		case 0:
			main();
			break;
			
		case 1:
			printf("Selected Dish: Biriyani\n")
			printf("Price: 180\n");
			printf("Prep. Time: 15 mins.\n\n")
			printf("Do you want to place order?(Y/n)\n => ");
			scanf("%c", &choice);
			if(ch == 'Y' | ch == 'y'){
				printf("-----------------------\n")
				printf("Prepairing your dish\n\n")
				price += 180;
				printf("Total Bill: %d.", price);
				printf("-----------------------\n")
			}
			elseif(ch == 'N' | ch =='n'){
				main();
			}
			else{
				print("Invalid Option!! Please try again.");
				main();
				break;
			}
			
		case 2:
			printf("Selected Dish: Gulab Jamun\n")
			printf("Price: 20\n");
			printf("Prep. Time: 5 mins.\n\n")
			printf("Do you want to place order?(Y/n)\n => ");
			scanf("%c", &choice);
			if(ch == 'Y' | ch == 'y'){
				printf("-----------------------\n")
				printf("Prepairing your dish\n\n")
				price += 20;
				printf("Total Bill: %d.", price);
				printf("-----------------------\n")
			}
			elseif(ch == 'N' | ch =='n'){
				main();
			}
			else{
				print("Invalid Option!! Please try again.");
				main();
				break;
			}
			
		case 3:
			printf("Selected Dish: Raita\n")
			printf("Price: 10\n");
			printf("Prep. Time: 2 mins.\n\n")
			printf("Do you want to place order?(Y/n)\n => ");
			scanf("%c", &choice);
			if(ch == 'Y' | ch == 'y'){
				printf("-----------------------\n")
				printf("Prepairing your dish\n\n")
				price += 10;
				printf("Total Bill: %d.", price);
				printf("-----------------------\n")
			}
			elseif(ch == 'N' | ch =='n'){
				main();
			}
			else{
				print("Invalid Option!! Please try again.");
				main();
				break;
			}
			
		case 4:
			printf("\n===========================================\n");
			printf("--------------Resturant Bill---------------\n");
			printf("===========================================\n\n");
			printf("Bill: %d.\n", price);
			price = price + (price * 0.05);
			printf("Applicable Tax: 5%\n");
			printf("total: %d.\n", price);
			printf("===========================================\n\n");
			printf("----------Thank you for visiting-----------");
			break;
			
		case default:
			main();
			break;
			
	}
}
