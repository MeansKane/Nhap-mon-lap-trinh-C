#include <stdio.h>
#include <math.h>
int main (){
	int n;  
	float S = 0; 
	printf ("Nhap N > 0 : ");
	scanf ("%d", &n);
	do {
		if (n < 0){
			printf ("Nhap lai N : ");
			scanf ("%d", &n);
		}
	} while (n < 0);
	for (int i = 1  ; i <= n  ; i++){
		S = S + pow(-1, i - 1) / pow(2 * n, 2);
	}
	printf ("S = %f", S);
}
