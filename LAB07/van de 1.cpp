#include <stdio.h>
int main (){
	int N;
	printf ("Hay nhap N: ");
	scanf ("%d", &N);
	if (N > 100 || N < 0){
	do {
		printf ("Hay nhap lai N: ");
		scanf ("%d", &N);		
	} while ( N > 100 || N < 0);
	
	} 
	printf ("Dung roi ");
}
