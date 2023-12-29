#include <stdio.h>


void in (int a[] , int &n) ; 
int dem (int a[] , int n , int x) ;
 
int main (){
	int a[100] ;
	int n ; 
	in (a , n) ; 
	int x ; 
	scanf ("%d", &x);
	printf ("%d", dem (a , n , x)) ; 
	return 0 ; 
}

void in (int a[] , int &n){
	scanf ("%d", &n);
	for (int i = 0 ; i < n ; i++){
		scanf ("%d", &a[i]);
	}
}

int dem (int a[] , int n , int x){
	int dem = 0 ; 
	for (int i = 0 ; i < n ; i++){
		if (a[i] == x){
			dem++ ; 
		}
	}
	return dem ; 
}
