#include<stdio.h>

int main() {
	char item[20];
	int qty;
float price, Total;
	
	
	printf("what do you want to buy");
	scanf("%s",item);
	
	printf("Type the qanlity");
	scanf("%d",& qty);
	
	printf("type the price");
	scanf("%f",price);
	
	Total= qty * price;
	
	printf("item is %s /n",item);	
		printf("qanlity is %d /n",qty);
	printf("price is %f /n",price);
	printf("the total %f /n",Total);
	return 0;
}
