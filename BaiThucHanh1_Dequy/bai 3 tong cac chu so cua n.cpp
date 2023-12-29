#include<stdio.h>
int sumN(int n){
	if(n < 10)
		return n;
	return sumN(n / 10) + (n % 10);
}
int main(){
	printf("%d", sumN(1980));
	return 0;
}
