#include<stdio.h>
float avr(int a[], int n, int &cnt){
	if(n == 0)
		return 0;
	if(a[n - 1] < 0){
		cnt++;
		return avr(a, n - 1, cnt) + a[n - 1];
	}
	return avr(a, n - 1, cnt);
}
int main(){
	int a[100], n, cnt;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("\n%.2f", avr(a, n, cnt) * 1.0 / cnt);
	return 0;
}
