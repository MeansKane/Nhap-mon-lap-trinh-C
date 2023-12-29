#include <stdio.h>
#include <string.h>

/*
	Yeu cau chuan hoa chuoi 
	- xoa khoang trang dau, cuoi, giua 
	- Viet hoa tung chu dau cua moi tu va cac chu con lai viet thuong 
*/

int soTu (char c[]) ; 
void xoa_khoangTrang_oDauchuoi (char c[]) ;
void xoa_khoangTrang_oCuoichuoi (char c[]) ;
void xoa_khoangTrang_oGiuachuoi (char c[]) ;
void vietHoachudau (char c[]) ; 

int main ()
{
	char c[100] ; 
	printf ("Nhap chuoi di ban oi : ") ; 
	gets (c) ; 
	printf ("Chuoi vua nhap : %s", c) ; 
	printf ("\nSo tu trong chuoi : %d", soTu (c)) ; 
	xoa_khoangTrang_oDauchuoi (c) ; 
	xoa_khoangTrang_oCuoichuoi (c) ; 
	xoa_khoangTrang_oGiuachuoi (c) ; 
	vietHoachudau (c) ;
	printf ("\nChuoi sau khi chuan hoa :%s", c) ;
	return 0 ; 
}

int soTu (char c[])
{
	// c[0] la 1 tu && c[i] dung sau khoang trang la 1 tu 
	int dem = (c[0] != ' ') ; 
	for (int i = 0 ; i < strlen (c) - 1; i++)
	{
		if (c[i] == ' ' && c[i + 1] != ' ')
		{
			dem++ ; 
		}
	}
	return dem ; 
}

void xoa_khoangTrang_oDauchuoi (char c[])
{
	while (c[0] == ' ')
	{
		strcpy (&c[0] , &c[1]) ;  
	}
}

void xoa_khoangTrang_oCuoichuoi (char c[])
{
	while (c[strlen (c) - 1] == ' ')
	{
		strcpy (&c[strlen (c) - 1] , &c[strlen (c)]) ;  
	}
}

void xoa_khoangTrang_oGiuachuoi (char c[]) 
{
	for (int i = 0 ; i < strlen (c) ; i++)
	{
		if (c[i] == ' ' && c[i + 1] == ' ')
		{
			strcpy (&c[i] , &c[i + 1]) ;
			i-- ;
		} 
	}
}

void vietHoachudau (char c[])
{
	for (int i = 0 ; i < strlen (c) ; i++)
	{
		if (i == 0 || i > 0 && c[i - 1] == ' ')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] -= 32 ; 
			}
		}
		else 
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] += 32 ; 
			}
		}
	}
}


