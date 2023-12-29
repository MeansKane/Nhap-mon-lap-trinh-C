#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void in_rand(int a[] , int &n); 
void out_rand (int a[] , int n);
void sapxeptang (int a[] , int n);

int main (){
	int a[100] , n ; 
	in_rand(a , n);
	sapxeptang(a , n);
	out_rand(a , n);
	return 0 ; 
}

void in_rand (int a[] , int &n){
	do{
		printf ("Nhap so luong phan tu n : ") ; 
		scanf ("%d", &n);
	}	while (n > 100);
	for (int i = 0 ; i < n ; i++){
		a[i] = rand() ; 
	}
}

void out_rand(int a[] , int n){
	for (int i = 0 ; i < n ; i++){
		printf ("%d\t", a[i]);
	}
}

void sapxeptang(int a[] , int n){
	for (int i = 0 ; i < n - 1 ; i++){
		for (int j = n - 1 ; j > i ; j--){
			if (a[j] < a[j - 1]){
				int temp = a[j] ; 
				a[j] = a[j - 1] ; 
				a[j - 1] = temp ; 
			}
		}
	}
}

