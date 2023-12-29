#include<stdio.h>
#include<stdlib.h>
void enterArr(int *a, int n){
	for(int i = 0; i < n; i++){
		scanf("%d", a + i);
	}
}
void printArr(int *a, int n){
	for(int i = 0; i < n; i++){
		printf("%d\t", *(a + i));
	}
}
int cnt(int *a, int n){
	int cnt= 0;
	for(int i = 0; i < n; i ++){
		if(*(a + i) % 4 == 0 && *(a + i) % 10 == 6){
			cnt++;
		}
	}
	return cnt;
}
void Oddx2(int *a, int n){
	for(int i = 0; i < n; i++){
		if(*(a + i) % 2 != 0){
			*(a + i) *= 2;
		}
		printf("%d\t", *(a + i));
	}
}
int main(){
	int *a, n;
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	enterArr(a, n);
	printArr(a, n);
	printf("\n%d", cnt(a, n));
	printf("\n");
	Oddx2(a, n);
	free(a);
	return 0;
}	
