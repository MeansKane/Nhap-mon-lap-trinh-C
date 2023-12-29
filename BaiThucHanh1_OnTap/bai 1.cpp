#include <stdio.h>

int main ()
{
	float dc, tong, m1, m2, m3;
	printf ("Nhap diem chuan : ");
	scanf ("%f", &dc);
	printf ("Nhap diem 3 mon : ");
	fflush(stdin);
	scanf ("%f%f%f", &m1, &m2, &m3);
	char kv;
	float diemkv;
	printf ("Nhap khu vuc (A, B, C, X) : ");
	fflush(stdin);
	scanf ("%c", &kv);
	int dt;
	float diemdt;
	printf ("Nhap doi tuong (1, 2, 3, 0) : ");
	fflush(stdin);
	scanf ("%d", &dt);
	switch (kv)
	{
		case 'A' : diemkv = 2; break;
		case 'B' : diemkv = 1; break;
		case 'C' : diemkv = 0.5; break;
		case 'X' : diemkv = 0; break;
	}
	switch (dt)
	{
		case 1 : diemdt = 2.5; break;
		case 2 : diemdt = 1.5; break;
		case 3 : diemdt = 1; break;
		case 0 : diemdt = 0; break;
	}
	tong = m1 + m2 + m3 + diemkv + diemdt;
	if (tong >= dc)
	{
		printf ("Dau [%.0f]", tong);
	}
	else 
	{
		printf ("Rot [%.0f]", tong);
	}
	return 0;
}
