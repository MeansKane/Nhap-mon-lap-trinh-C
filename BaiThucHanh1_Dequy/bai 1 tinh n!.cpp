#include<stdio.h>
long long int gt(int n){
	if(n == 0)
		return 1;
	return gt(n - 1) * n;
}

int main(){
	printf("%lld", gt(5));
	return 0;
}
