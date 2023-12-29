#include <stdio.h>

int main (){
	int a[100] , n ; 
	do {
		printf ("Nhap n phan tu : ");
		scanf ("%d", &n);
	}	while (n < 0 || n > 100) ;
	for (int i = 0 ; i < n ; i++){
		printf ("a[%d] = ", i) ;
		scanf ("%d", &a[i]);
	}
	printf ("\n");
	for (int i = n - 1; i >= 0 ; i--) {
		printf ("%d\t", a[i]);
	}
	return 0 ; 
}
