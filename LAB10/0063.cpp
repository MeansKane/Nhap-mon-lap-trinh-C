#include <stdio.h>

int main (){
	int a [10] , b[10] ; 
	for (int i = 0 ; i < 10 ; i++){
		a[i] = i ; 
		printf ("a[%d] = %d\n",i , a[i]);
	}
	printf ("==========\n");
	for (int i = 0 ; i < 10 ; i++){
		b[i] = a[i] + 10; 
		printf ("b[%d] = %d\n", i , b[i]);
	}
	return 0 ; 
}
