#include <stdio.h>
#include <math.h>
int main (){
	int n;  
	double S = 0; 
	printf ("Nhap N > 0 : ");
	scanf ("%d", &n);
	do {
		if (n < 0){
			printf ("Nhap lai N : ");
			scanf ("%d", &n);
		}
	} while (n < 0);
	for (double i = (1.0 / 2*2) - (1.0 / 4*4) ; i <= n ; i+=2){
		S = S + pow(-1.0, i - 1.0) / ((2 * n) * (2 * n));
	}
	printf ("S = %lf", S);
}
