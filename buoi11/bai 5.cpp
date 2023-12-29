#include <stdio.h>

void in (int a[] , int &n) ;
float tinhtb (int a[] , int n) ;
  
int main (){
	int a[100] , n ; 
	in (a , n) ; 
	printf ("%.2f", tinhtb(a , n));
	return 0 ;
}

void in (int a[] , int &n){
	scanf ("%d", &n); 
	for(int i = 0 ; i < n ; i++){
		scanf ("%d", &a[i]) ; 
	}
}

float tinhtb (int a[] , int n){
	float tb = 0 ; 
	float sum = 0 ; 
	for (int i = 0 ; i < n ; i++){
		sum += a[i]  ;
	}
	tb = sum / n ; 
	return tb ; 
}
