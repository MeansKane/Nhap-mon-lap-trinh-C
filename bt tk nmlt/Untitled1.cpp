#include <stdio.h>

int main (){
	int a , b , c ; 
	int chon_so , sum = 0 ; 
	printf ("Nhap a , b , c : ");
	scanf ("%d %d %d", &a, &b, &c);
	printf ("Chon 1 so hay 2 so : ");
	scanf ("%d", &chon_so);
	switch (chon_so){
		case 1 : 
				sum = a + b + c ; 
				printf ("%d", sum);
				break ; 
		case 2 : 
				if (c == 0){
					printf ("Khong the chia het cho 0");
				}			
				else {
					sum = (a + b) / c ;
					printf ("%d", sum);	
				}
				break ; 
	}
return 0 ;	
}
