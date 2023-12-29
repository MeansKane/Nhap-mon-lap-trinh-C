#include <stdio.h>
#include <math.h>
int so_ngto(int n);
int main (){
	int n , so_nt; 
	printf ("Nhap n : ");
	scanf ("%d", &n);
	for (int i = 2 ; i <= n ; i++){
		if (so_ngto(i)){
			printf ("%d\t", i);
		}
	}
return 0 ; 
}

int so_ngto(int n){
	int m = sqrt(n);
	int i ; 
	if (n < 2){
		return 0; 
	}
	for (i = 2 ; i <= m ; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1; 
}





