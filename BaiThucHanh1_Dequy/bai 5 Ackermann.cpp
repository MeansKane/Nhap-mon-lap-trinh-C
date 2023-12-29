#include<stdio.h>
int A(int n, int m, int &k){
	k++;
	if(n == 0)
		return m + 1;
	if(m == 0)
		return A(n - 1, 1, k);
	if(n > 0 && m > 0)
		return A(n - 1, A(n, m - 1, k), k);
}
int main(){
	int k = 0;
	printf ("A(3, 6) = %d", A(3, 6, k));
	printf ("\nGoi de quy %d lan", k);
	return 0;
}
