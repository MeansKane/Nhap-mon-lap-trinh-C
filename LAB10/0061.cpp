#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void in_rand (int a[]); 
void out_rand (int a[]);
int TB(int a[]);

int main (){
	int a[1000] , cong = 0; 
	do {
	in_rand(a);
	TB(a);
	out_rand(a);
	cong++ ; 
	} while (cong < 100) ; 
	return 0 ; 
}

void in_rand (int a[]){
	srand(time(NULL));
	for (int i = 0 ; i < 10 ; i++){
		a[i] = rand() ; 
	}
}

int TB(int a[]){
	int sum = 0 , tb = 0 , dem = 0 ; 
	int i ; 
	for (i = 0 ; i < 10 ; i++){
		sum = sum + a[i]; 
		dem++ ; 
	}
	tb = sum / dem ; 
	printf ("Gia tri trung binh cua cac phan tu mang : %d", tb);
	return tb ; 
}

void out_rand (int a[]){
	printf ("\nGia tri cac phan tu mang : \n");
	int i ; 
	for (i = 0 ; i < 10 ; i++){	
		printf("a[%d] = %d\n", i , a[i]);
	}
	printf ("Tam dung man hinh !");
}


