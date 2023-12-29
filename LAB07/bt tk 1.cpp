#include <stdio.h>

int main(){
	int CustNum;
	float Price;
	int TicketType;
	char Type1; 
	
	scanf ("%d", &CustNum);
	while (CustNum != 0){
		scanf ("%d", &TicketType);
		switch ( TicketType){
			case 1: 
				scanf ("%d", &Type1);
				if (Type1 = 'P'){
					printf ("$20.00");
					}
				else {
					printf ("$10.00");
				}
				break;
			case 2: 
				printf ("$5.00");
				break;
			case 3: 
				printf ("$8.50");
				break;
			}
	printf ("%d", CustNum);
	printf  ("%d", Price);
	scanf ("%d", &CustNum);
	
	
	}	
}
