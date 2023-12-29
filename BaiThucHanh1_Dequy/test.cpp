#include<stdio.h>
void enterArr(int a[], int n){
	if(n > 0){
		enterArr(a, n - 1);
		scanf("%d", &a[n - 1]);
	}
}
void printArr(int a[], int n){
	if(n > 0){
		printArr(a, n - 1);
		printf("%d ", a[n - 1]);
	}
}
int isprime(int n)
{
	if(n == 1)
	{
		return 1;	
	}	
	int static m = n - 1;
	if(m == 1)
	{
		return 1;
	}
	else if(n % m == 0)
	{
		return 0;
	}
	else
	{
		m--;
		isprime(n);
	}
}
void lietke(int a[], int n){
	for(int i = 0; i < n; i++){
		if(isprime(a[i]))	
			printf("%d ", a[i]);
	}
}
int main(){
	int a[1000], n;
	scanf("%d", &n);
	enterArr(a, n);
	lietke(a, n);
	return 0;
}
