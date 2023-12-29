#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int *a;
	char *b;// bien cuc bo
	
// a = (int*) malloc(3 * sizeof(int));// 12
//	a = (int*) malloc(10 * sizeof(int));//malloc(?? bao nhieu byte) :memorry location xin cap 4 byte trong vung HEAP de chua so nguyen

	a = (int*)calloc(10 , sizeof(int));// calloc(so khoi , kich thuoc moi khoi)
	
	a = (int*)realloc(a , sizeof(int));// cap phat lai  
	
	scanf ("%d" , a + 1);// &a[i]
	
//	printf ("%d \n", &a);// 6487576 dia chi vung STACK
//	printf ("%d", a);// 11146288 dia chi vung HEAP
	
	printf ("%d", *(a + 1));	
	
	free(a);// giai phong vung nho
	return 0;
}
