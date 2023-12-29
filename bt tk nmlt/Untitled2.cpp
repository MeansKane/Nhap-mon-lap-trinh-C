#include <stdio.h>
int nhap_ID(int a);
int nhap_Withdrawals(int b);
int main (){
	
	return 0 ; 
}

int nhap_ID(int a){
	printf ("Nhap ID : ");
	scanf ("%d", &a);
	do {
		if (a < 1000 || a > 9999 || a == -999){
			printf ("Nhap lai ID : ");
			scanf ("%d", &a);	
		}
	}	while (a < 1000 || a > 9999 || a == -999);
}
