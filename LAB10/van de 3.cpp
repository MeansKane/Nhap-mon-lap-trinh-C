#include <stdio.h>
#define MAX 1000

void input (int A[] , int &n);
void output (int A[] , int n);
int max (int A[] , int n);
int min (int A[] , int n);
int search(int A[] , int n , int x);
void append(int A[] , int n , int x);
void insert (int A[] , int &n ,int x , int k);
void delete1(int A[] , int &n , int k);
void sort (int A[] , int n);
void sort_giam (int A[] , int n);

int main (){
	printf ("Menu : ");
	printf ("\n1) Tao day so");
	printf ("\n2) Hien thi day so");
	printf ("\n3) Tim Max");
	printf ("\n4) Tim Min");
	printf ("\n5) Tim phan tu X");
	printf ("\n6) Bo sung phan tu");
	printf ("\n7) Chen phan tu vao vi tri k");
	printf ("\n8) Xoa phan tu thu k");
	printf ("\n9) Sap xep day so");
	printf ("\n10) Thoat !");
	printf ("\nHay chon chuc nang bang cach nhap 1 so tu 1 den 10") ; 
	int A[MAX] , n , x, k ,chon;
	do {
		printf ("\nHay chon chuc trong menu : ");
		scanf ("%d", &chon);
		switch (chon){
			case 1 : 
				input (A , n);
				break ; 
			case 2 : 
				printf ("\nCac phan tu co trong mang : \n");
				output (A , n);
				break ; 
			case 3 : 
				max (A , n);
				break ; 
			case 4 : 
				min (A , n);
				break ; 
			case 5 : 
				int tim_kiem ; 
				tim_kiem = search(A , n , x);
				if (tim_kiem == -1 ){
					printf ("Khong tim thay vi tri X !");
				}
				else {
					printf ("Phan tu X nam o vi tri : %d", tim_kiem);
				}
				break ; 
			case 6 : 
				printf ("Nhap gia tri ban muon chen vao cuoi day cua mang : ");
				scanf ("%d", &x); 
				n = n + 1 ; 
				append(A , n , x);
				output (A , n);
				break ;
			case 7 :  
				printf ("Nhap gia tri ban muon chen vao vi tri k: ");
				scanf ("%d", &x);
				do {
					printf ("Nhap vi tri k ban muon chen : ");
					scanf ("%d", &k); 
				}	while (k < 0 || k >= n) ;
				n = n + 1 ;
				insert (A , n , x , k);
				output (A , n);
				break  ;
			case 8 : 
				do {
					printf ("Nhap vi tri k ban muon xoa : ");
					scanf ("%d", &k); 
				}	while (k < 0 || k >= n) ; 
				delete1(A , n , k); 
				output(A , n);
				break ; 
			case 9 : 
				printf ("\nCac phan tu co trong mang sau khi da dc sap sep tang dan : \n");
				sort (A , n) ;
				output (A , n); 
				break ; 
		}		
	}	while (chon >= 1 && chon < 10);
	printf ("Nghi ngu thui nao cac ban !");
	return 0 ; 
}

void input (int A[] , int &n){  // tao day so 
	do {
		printf ("Nhap n phan tu co trong mang A : ");
		scanf ("%d", &n);
	}	while (n < 0);
	for (int i = 0 ; i < n ; i++){
		printf ("A[%d] = ", i);
		scanf ("%d", &A[i]);
	}
}

void output (int A[] , int n){ // hien thi ra day so
	for (int i = 0 ; i < n ; i++){
		printf ("%d\t", A[i]);
	}
}

int max (int A[] , int n){ // tim max
	int max = A[0] ;
	for (int i = 0 ; i < n ; i++){
		if (max < A[i]){
			max = A[i] ; 
		}
	}
	printf ("Max = %d", max);
	return max ; 
}

int min (int A[] , int n){ // tim min 
	int min = A[0] ; 
	for (int i = 0 ; i < n ; i++){
		if (min > A[i]){
			min = A[i] ; 
		}
	}
	printf ("Min = %d", min);
	return min ; 
} 
 
int search (int A[] , int n , int x){ // tim phan tu x 
	printf ("Nhap phan tu X muon tim vi tri : ");
	scanf ("%d", &x);
	for (int i = 0 ; i < n ; i++){
		if (x == A[i]){
			return i ; 
		}
	}
	return -1 ; 
}

void append (int A[] , int n , int x){
	int i ;
	for (i = n - 1 ; i > n ; i--){
		A[i]  = A[i - 1] ; 
	}
	A[i] = x ; 
}

void insert (int A[] , int &n , int x , int k){ 
	for (int i = n - 1 ; i > k ; i--){ // dich chuyen cac phan tu sang ben phai
 		A[i] = A[i - 1] ; 
	}
	A[k] = x ;  
}

void delete1 (int A[] , int &n , int k){
	for (int i = k ; i < n - 1 ; i++){ // dich chuyen cac phan tu sang trai 
		A[i] = A[i + 1];
	}
	n-- ; // va tru di 1 phan tu 
}

void sort (int A[] , int n){
	for (int i = 0 ; i < n ; i++){ // sap xep theo thu tu tang dan 
		for (int j = n - 1 ; j > i ; j--){
			if (A[j] < A[j - 1]){
				int temp = A[j] ; 
				A[j] = A[j - 1] ; 
				A[j - 1 ] = temp ; 
			}
		}
	}
}

//void sort_giam(int A[] , int n){
//	for (int i = 0 ; i < n ; i++){ // sap xep theo thu tu giam dan 
//		for (int j = n - 1 ; j > i ; j--){
//			if (A[j] > A[j - 1]){
//				int temp = A[j] ; 
//				A[j] = A[j - 1] ; 
//				A[j - 1 ] = temp ; 
//			}
//		}
//	}
//}


