#include<stdio.h>
double gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a % b);
}
double lcm(int a, int b){
	return a * b / gcd(a, b);
}
int main(){
	int a, b;
	printf("Nhap 2 so : ");
	scanf("%d%d", &a, &b);
	if(a == 0 && b == 0)
	{
		printf ("GCD(%d, %d) : Khong xac dinh", a, b);
	}
	else 
	{
		printf ("GCD(%d, %d) = %.0lf ", a, b, gcd(a, b));
	}
	return 0;
}
