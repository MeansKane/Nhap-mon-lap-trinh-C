#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *a, *b;
	a = (float*)malloc(sizeof(float));
	b = (float*)malloc(sizeof(float));
	printf ("Nhap 2 so thuc : ");
	scanf ("%f%f", a, b);
	printf ("Tong : %.2f\n", *a + *b);
	printf ("Hieu : %.2f\n", *a - *b);
	printf ("Tich : %.2f\n", *a * *b);
	printf ("Thuong : %.2f", *a / *b);
	free(a);
	free(b);
	return 0;
}
