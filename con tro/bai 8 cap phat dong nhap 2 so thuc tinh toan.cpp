#include<stdio.h>
#include<stdlib.h>
int main(){
	float *a, *b;
	a = (float*)malloc(sizeof(float));
	b = (float*)malloc(sizeof(float));
	scanf("%f%f", a, b);
	printf("a + b = %f", *a + *b);
	printf("\na - b = %f", *a - *b);
	printf("\na * b = %f", *a * *b);
	printf("\na / b = %f", *a / *b);
	free(a);
	free(b);
	return 0;
}
