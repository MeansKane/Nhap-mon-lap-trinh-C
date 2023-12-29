#include <stdio.h>


void in (int a[] , int &n); 
int demchan (int a[] , int n) ; 
int demle(int a[] , int n) ;

int main (){
	int a[100]  , n ; 
	in (a , n ) ; 
	printf ("%d", demchan (a , n));
	printf ("\n%d", demle (a , n));
	return 0 ; 
}

void in (int a[] , int &n){
	scanf ("%d", &n);
	for (int i = 0 ; i < n ; i++){
		scanf ("%d", &a[i]);
	}
}

int demchan (int a[] , int n){
	int dem = 0 ; 
	for (int i = 0 ; i < n ; i++){
		if (a[i] % 2 == 0){
			dem++  ;
		}
	}
	return dem ; 
}

int demle (int a[] , int n){
	int dem = 0 ; 
	for (int i = 0 ; i < n ; i++){
		if (a[i] % 2 != 0){
			dem++  ;
		}
	}
	return dem ; 
}
