#include <stdio.h>
int main (){
	int n, S = 0; 
	do {
		printf ("Hay nhap so nguyen:");
		scanf ("%d", &n);
		if (n >= 0){
			S = S + n;
		}	
	}  while (n >= 0);
	printf ("Tong : %d", S);		
}
	
