#include <stdio.h> 
#include <math.h>
int main (){
	int n;
	int S = 1;
	printf ("Hay nhap so nguyen duong : ");
	scanf ("%d", &n);
	do {
		if (n < 0){
			printf ("Hay nhap lai so nguyen duong : ");
			scanf ("%d", &n);
		}
	} while (n < 0);
	
	if (n % 2 != 0){
		for (int i = 1; i <= n; i+=2){
			S = S * i;
		}
	}
	else {
		for (int j = 2; j <= n; j+=2){
			S = S * j;
		}		
	}
	printf (" S = %d", S);	
	return 0;
}

