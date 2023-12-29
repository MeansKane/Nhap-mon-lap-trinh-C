#include <stdio.h>
#include <math.h>
int main (){
	int n , S = 0;
	printf ("Hay nhap so nguyen N > 0 : ");
	scanf ("%d", &n);
	do {
		if (n < 0){
			printf ("Hay nhap lai so nguyen N > 0 : ");
			scanf ("%d", &n);	
		}
	} while (n < 0);
	
	for (int i = 1; i <= n - 1; i++){
		S = S + ((2 * i + 1) * (2 * i + 1));
	}
	printf ("S = %d", S);
}
