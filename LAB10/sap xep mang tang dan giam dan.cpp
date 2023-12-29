#include <stdio.h>

void nhapMang (int a[] , int &n);
void xuatMang (int a[] , int n);
void tangDan (int a[] , int n);
void giamDan (int a[] , int n);

int main ()
{
	int a[100] , n;
	nhapMang(a , n);
	printf ("Day la mang vua nhap : ");
	xuatMang(a , n); 
	printf ("\n");
	printf ("Mang sau khi sap xep tang dan : ");
	tangDan(a , n);
	xuatMang(a , n);
	printf ("\n");
	printf ("Mang sau khi sap xep giam dan : ");
	giamDan(a , n);
	xuatMang(a , n);
	return 0 ; 
}

void nhapMang (int a[] , int &n)
{
	do 
	{
		printf ("Nhap so luong cac phan tu di nao : ");
		scanf ("%d", &n);
	}	while (n < 0 || n > 100);
	for (int i = 0 ; i < n ; i++)
	{
		printf ("Nhap phan tu a[%d] : ", i + 1);
		scanf ("%d", &a[i]);
	}
}

void xuatMang (int a[] , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		printf ("%d\t", a[i]);
	}
}

//void tangDan (int a[] , int n)
//{
//	for (int i = 0 ; i < n - 1 ; i++)// chay tu dau mang den gan cuoi mang 
//	{
//		for (int j = n - 1 ; j > i ; j--) // chay tu gan cuoi mang len dau mang
//		{
//			if (a[j] < a[j - 1]) // neu vi tri dung sau ma < vi tri dung truoc thi ta hoan doi vi tri cho nhau
//			{
//				int temp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = temp;	
//			}	
//		} 
//	}
//}

void tangDan (int a[] , int n)
{
	for (int i = 0 ; i < n - 1 ; i++)// chay tu dau mang den gan cuoi mang 
	{
		for (int j = i + 1 ; j < n ; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

//void giamDan (int a[] , int n)
//{
//	for (int i = 0 ; i < n - 1 ; i++) // chay tu dau mang den gan cuoi mang 
//	{
//		for (int j = n - 1 ; j > i ; j--) // chay tu gan cuoi mang len dau mang
//		{
//			if (a[j] > a[j - 1]) // neu vi tri dung sau > vi tri dung truoc 
//			{
//				int temp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = temp;
//			}
//		}
//	}
//}

void giamDan (int a[] , int n)
{
	for (int i = 0 ; i < n - 1 ; i++)// chay tu dau mang den gan cuoi mang 
	{
		for (int j = i + 1 ; j < n ; j++)
		{
			if (a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

