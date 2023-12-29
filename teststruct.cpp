#include<stdio.h>
#include<string.h>

struct SV{
	char mssv[50];
	char ten[100];
	float gpa;
};

typedef struct SV sv;

void nhap(sv *a)
{
	printf("Nhap mssv : ");
	scanf("%s", a->mssv);
	getchar();
	printf("Nhap ten : ");
	gets(a->ten);
	printf("Nhap diem : ");
	scanf("%f", &a->gpa);
}

void xuat(sv a)
{
	printf("%s %s %.2f\n", a.mssv, a.ten, a.gpa);
}

int main()
{
	sv a[100];
	int n;
	printf("Nhap so luong sinh vien : ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		nhap(&a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		xuat(a[i]);
	}
	return 0;
}
