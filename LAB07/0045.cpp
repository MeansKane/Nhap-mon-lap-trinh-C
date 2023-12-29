#include <stdio.h>
int main (){
	int n,  S = 0;
	printf ("Hay nhap so nguyen N > 1 : ");
	scanf ("%d", &n);
	do {
		if (n <= -1){
			printf ("Hay nhap lai so nguyen N > 1 : ");
			scanf ("%d", &n);	
		}
	} while (n <= -1);
	if (n != 0){
	for (int i = 1 ; i <= n ; i+=2){
		S = S + i;
	 	}	
	}
	printf ("S = %d", S);
}
