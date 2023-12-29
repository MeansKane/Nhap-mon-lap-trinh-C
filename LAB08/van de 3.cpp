#include <stdio.h>

double gt (int n);

int main (){
	int n , S; 
	do {
		printf ("nhap n nguyen duong : ");
		scanf ("%d", &n);
	}	while (n < 0);
	
	S = gt(n);
	printf ("S = %d", S);
	return 0 ;
}

double gt (int n){
	double p = 1; 
	int s = 1;
	for (int i = 1 ; i <= n ; i++){
		p *= i;
		s += p;
	}
	return s;
}


