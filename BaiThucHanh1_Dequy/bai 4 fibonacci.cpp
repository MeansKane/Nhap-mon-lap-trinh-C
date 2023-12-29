#include<stdio.h>
double fibo(int n){
	if(n == 1 || n == 2)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}
int main(){
	printf ("%.0lf", fibo(10));
	return 0;
}
