#include <stdio.h>
#define PRICE1 120
#define PRICE2 100
#define DISCOUNT 0.1
int main ()
{
	int Number_of_days;
	int Price, DAYS = 5;
	printf ("Number_of_days: ");
	scanf ("%d", &Number_of_days);
	if (Number_of_days >= 0 && Number_of_days < 50)
	{

			if (Number_of_days <= 5)
			{
				Price = PRICE1 * Number_of_days;			
			}
			else 
			{
				Price = PRICE1 * DAYS + (Number_of_days - DAYS ) * PRICE2 ;
			}
			if (Number_of_days >= 15)
			{
				Price = PRICE1 * (1 - DISCOUNT);
			}
	}
	printf ("Price: %d", Price);
}
