#include <stdio.h>

void nhapMang (int a[] , int n);
void xuatMang (int a[] , int n);
void xoa1phantu (int a[] , int &n , int vitrixoa);
void xoaphantuCuoi (int a[] , int n);
void xoaphantuDau (int a[] , int n);

int main ()
{
    int a[100] , n , vitrixoa;
    do {
        printf ("Nhap so luong phan tu - : ");
        scanf ("%d", &n);
    }   while (n < 0 || n > 100);
    nhapMang (a , n);
    printf ("Day la mang cua ban : ");
    xuatMang (a , n);
    printf ("\nNhap vi tri muon xoa : ");
    scanf ("%d", &vitrixoa);
    printf("Day la mang sau khi xoa phan tu tai vi tri %d : ", vitrixoa);
    xoa1phantu (a , n , vitrixoa);
    xuatMang (a , n);
    printf ("\nDay la mang sau khi xoa phan tu cuoi : ");
    xoaphantuCuoi (a , n);
    printf ("\nDay la mang sau khi xoa phan tu dau : ");
    xoaphantuDau (a , n);
    return 0;
}


void nhapMang (int a[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        printf ("Nhap phan tu [%d] : ", i);
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

void xoa1phantu (int a[] , int &n , int vitrixoa)
{
    for (int i = vitrixoa ; i < n - 1 ; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void xoaphantuCuoi (int a[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        if (i == (n - 1))
        {
            xoa1phantu (a , n , i);
        }
    }
	xuatMang (a , n);
}

void xoaphantuDau (int a[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        if (i == 0)
        {
            xoa1phantu (a , n , i);
        }
    }
	xuatMang (a , n);
}
