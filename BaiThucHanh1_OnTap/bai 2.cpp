#include <stdio.h>
#include <math.h>

void nhapMang (float x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf ("Nhap phan tu [%d] : ", i);
		scanf ("%f", &x[i]);
	}
}

void xuatMang (float x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf ("%.2f\t", x[i]);
	}
}

float tb (float x[], int n)
{
	float m, sum = 0;	
	for (int i = 0; i < n; i++)
	{
		sum += x[i];
	}
	m = sum / n;
	return m;
}

float tongBinhPhuong (float x[] , int n)
{
	float ss = 0;
	for (int i = 0; i < n; i++)
	{
		ss += x[i]*x[i];
	}
	return ss;
}

float doLechChuan (float x[], int n)
{
	float d;
	float ss = tongBinhPhuong(x, n);
	float m = tb(x, n);
	d = sqrt((ss / n) - m * m);
	return d;
}

int main ()
{
	float x[100]; 
	int n;
	do 
	{
		printf ("Nhap n so thuc tu ban phim : ");
		scanf ("%d", &n);	
	} while (n > 100 | n < 0);
	nhapMang(x, n);
	printf ("Hien thi cac gia tri vua nhap ra man hinh : ");
	xuatMang(x, n);
	printf ("\nTinh gia tri trung binh cua mang : %.2f", tb(x, n));
	printf ("\nTinh tong binh phuong : %.2f", tongBinhPhuong(x, n));
	printf ("\nTinh do lech chuan (Standard deviation) : %.2f", doLechChuan(x, n));
	return 0;
}
