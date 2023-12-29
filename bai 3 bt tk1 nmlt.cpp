#include <stdio.h>
#define PRICE1P 20.00
#define PRICE1O 10.00
#define PRICE2  5.00
#define PRICE3  8.50
int main(){
	int CustNum;
	float Price;
	int TicketType;
	char Type1; 
	printf ("Custom Number: ");
	scanf ("%d", &CustNum);
	while (CustNum != 0){
	printf ("Tickertype: ");
	scanf ("%d", &TicketType);
	switch ( TicketType){
				
			case 1: 
				fflush(stdin);
				printf ("Type1: ");
				scanf ("%c", &Type1); 
				if (Type1 == 'O'){
					Price = PRICE1O;
				}
				else {
					Price = PRICE1P;
				}
				break;
			
			case 2: 
				Price = PRICE2;
				break;
			
			case 3: 
				Price = PRICE3;
				break;
			}
	printf ("\n%d   ", CustNum);	
	printf  ("$%.2f", Price);
	printf ("\nCustom Number: "); 
	scanf ("%d", &CustNum);
	
	
	}	
	
	
}


