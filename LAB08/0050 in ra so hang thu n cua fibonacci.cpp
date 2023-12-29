#include <stdio.h>

double fibo (int n);
int main (){
	int n ;
	double fibonacci;
	do {
		printf ("Nhap n : ");
		scanf ("%d", &n);
	}	while (n < 1);
	printf ("so hang thu %d cua day fibonacci : %.2lf", n, fibonacci = fibo (n));
	return 0 ; 
}

double fibo(int n){
	int t1 = 1 , t2 = 1 , f = 1 , i;
	for (i = 3 ; i <= n ; i++){
		f = t1 + t2 ; 
		t1 = t2 ; 
		t2 = f;
	}
	return f ; 
}
