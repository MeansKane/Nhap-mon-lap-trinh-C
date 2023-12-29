#include <stdio.h> 
int main ()
{
	int a , b , c , m;
	printf ("Nhap so a : "); 
	scanf ("%d", &a);
	printf ("Nhap so b : "); 
	scanf ("%d", &b);
	printf ("Nhap so c : "); 
	scanf ("%d", &c);
	if (a > b && a > c)
	{
		m = a;
	}
	if (b > a && b > c)
	{
		m = b;
	}
	if (c > a && c > b)
	{
		m = c;
	}
	else 
	{
		printf ("Ca 3 so bang nhau");
	}
	printf ("So lon nhat la %d", m);
	return 0;
}
