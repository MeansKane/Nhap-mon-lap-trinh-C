#include <stdio.h>
int main (){
	int n; 
	scanf (" %d ", &n);
	do {
		if (!(n > 100)){
			printf ( " dung roi ");
		
			if (n > 100){
				printf (" nhap lai n: ");
					scanf (" %d ", &n);
			}
		}
		n++ ; 
	} while (n >= 0 && n <= 100 );
		
}

