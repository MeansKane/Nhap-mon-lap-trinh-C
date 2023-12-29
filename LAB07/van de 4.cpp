#include <stdio.h>
#include <math.h>
int main (){
	 int n,i; 
	 float S = 0;
	 printf ("Nhap so nguyen : ");
	 scanf ("%d", &n);
	do {
		if (n < 0){
			printf ("Nhap lai : ");
			scanf ("%d", &n);
		}
	} while (n < 0);
	for (i = 1 ; i <= n ; i++){
		S = S + 1.0/i;
	}
	printf ("Tong : %f", S);
	
}		
	
	
