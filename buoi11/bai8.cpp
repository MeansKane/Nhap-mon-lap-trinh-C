#include <stdio.h>


void in (int a[] , int &n) ; 
int max (int a[] , int n) ; 
int vitrimax (int a[] , int n) ; 
int min (int a[] , int n) ;
int vitrimin (int a[] , int n) ;
 
int main (){
	int a[100] ;
	int n ; 
	in (a , n); 
	printf ("%d", max (a , n)) ; 
	printf (" %d\n", vitrimax (a , n));
	printf ("%d", min(a , n)) ; 
	printf (" %d", vitrimin (a , n));
	return 0 ; 
}

void in (int a[] , int &n){
	scanf ("%d", &n);
	for (int i = 0 ; i < n ; i++){
		scanf ("%d", &a[i]);
	}
}

int max (int a[] , int n){
	int max = a[0] ; 
	for (int i = 0 ; i < n ; i++){
		if (max < a[i]){
			max = a[i] ; 
		}
	}
	return max ; 
}

int vitrimax (int a[] , int n){
	for (int i = 0 ; i < n ; i++){
		if (max (a , n) == a[i]){
			return i ; 
		}
	}
	return -1 ; 
}

int min (int a[] , int n){
	int min = a[0] ; 
	for (int i = 0 ; i < n ; i++){
		if (min > a[i]){
			min = a[i] ; 
		}
	}
	return min ; 
}

int vitrimin (int a[] , int n){
	for (int i = 0 ; i < n ; i++){
		if (min (a , n) == a[i]){
			return i ; 
		}
	}
	return -1 ; 
}



