#include <stdio.h>


void in (int a[] , int &n);
void out (int a[] , int n) ;
int sodoixung (int n);  
int dem (int a[] , int n) ; 

int main (){
	int a[1000] , n ; 
	in (a , n) ; 
	printf ("%d\n", dem(a , n)); 
	out (a , n) ;   
	return 0 ; 
}

void in (int a[] , int &n){
	scanf ("%d", &n); 
	for (int i = 0 ; i < n ; i++){
		scanf ("%d", &a[i]);
	}
}

void out (int a[] , int n){
	for (int i = 0 ; i < n ; i++){
		if (sodoixung(a[i]))
			printf ("%d ", a[i]);
	}
}

int sodoixung (int n){
	int sodu = 0 , sodao = 0 ; 
	int m = n ;
	while (m > 0){
		sodu =  m % 10 ; 
		sodao = (sodao * 10) + sodu ; 
		m = m / 10 ; 
	}
	if (sodao == n){
		return 1 ; 
	}
	else {
		return 0 ; 
	}
}

int dem (int a[] , int n ){ 
	int dem = 0 ; 
	for (int i = 0 ; i < n ; i++){
		if (sodoixung(a[i]))
		dem++ ; 
	}
	return dem ; 
}
