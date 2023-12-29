#include <stdio.h>
#define PRICE1P 20.00
#define PRICE1O 10.00
#define PRICE2 5.00
#define PRICE3 8.50
int main ()
{
	int CustNum, TicketType;
	char Type1;
	float Price;
		printf ("CustNum : ");
		scanf ("%d", &CustNum);
			while (CustNum != 0)
			{
				printf ("TicketType : ");
				scanf  ("%d", &TicketType);	
					switch (TicketType)
					{
						case 1: 
							fflush(stdin);// xoa bo dem khi khong cho nhap tiep
							printf ("Type 1 : ");
							scanf ("%c", &Type1);
								if (Type1 = 'P')
								{
									Price = PRICE1P;			
								}
								else 
								{
									Price  = PRICE1O;	
								}
								break;
						case 2: 
							Price = PRICE2;
							break;
						case 3:
							Price  = PRICE3;
							break;
					}
			printf ("%d  ", CustNum);
			printf ("%.2f\n", Price);
			printf ("CustNum : ");
			scanf ("%d", &CustNum);
			}	
		
	
	
	
	
	
}

