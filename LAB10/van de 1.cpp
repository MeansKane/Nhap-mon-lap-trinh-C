//#include <stdio.h>
//#include <stdlib.h>
// //van de 1.1
//int main (){
//	int A[10];
//	int n , so_phan_tu;
//	printf ("So luong phan tu n = ");
//	scanf ("%d", &n);
//	for (int i = 0 ; i < n ; i++){
//		printf ("\nA[%d] = ",i);
//		scanf ("%d", &A[i]);
//	}
//return 0;
//}

 //van de 1.2
//#include <stdio.h>
//#include <stdlib.h>
//int main (){
//	int B[1000] , n, i;
//	printf ("So luong phan tu n = ");
//	scanf ("%d", &n);		
//	for ( i = 0 ; i < n ; i++){
//		B[i] = rand() ; 
//	}
//	for (i = 0 ; i  < n ; i++){
//		printf ("%d ", B[i]);
//	}
//return 0 ; 
//}

 //van de 1.3
#include <stdio.h>

int main (){
	int C[100];
	int n , i;
	printf ("Nhap n day so nguyen : ");
	scanf ("%d", &n);
	int a , b;
	printf ("Nhap a va b : ");
	scanf ("%d %d", &a, &b);
	for (i = 0 ; i < n ; i++){
		printf ("C[%d] = ", i);
		scanf ("%d", &C[i]);
	}
	for (i = i - 1 ; i >= 0 ; i--){
		if (C[i] >= a && C[i] <= b){
		printf ("%d\t", C[i]);
		}
	}
return 0 ; 
}
