#include <stdio.h>
#include <string.h>

char *xoa_kiTu_khoangTrang_dauChuoi (char c[]) ; 
char *xoa_kiTu_khoangTrang_cuoiChuoi (char c[]) ; 
char *xoa_kiTu_khoangTrang_giuaChuoi (char c[]) ;
 
int main ()
{
	char c[100] ; 
	printf ("Nhap chuoi di ban oi : ") ;
	gets (c) ; 
	printf ("Chuoi vua nhap ne :%s", c) ; 
	printf ("\nDo dai cua chuoi vua nhap : %d", strlen (c)) ; 
//	xoa_kiTu_khoangTrang_dauChuoi (c) ;
//	printf ("\nChuoi sau khi xoa cac ki tu khoang trang o dau :%s", c) ;
//	printf ("\nDo dai cua chuoi vua xoa cac ki tu khoang trang o dau : %d", strlen (c)) ; 
//	xoa_kiTu_khoangTrang_cuoiChuoi (c) ;
//	printf ("\nChuoi sau khi xoa cac ki tu khoang trang o cuoi :%s", c) ; 
//	printf ("\nDo dai cua chuoi vua xoa cac ki tu khoang trang o cuoi : %d", strlen (c)) ;
	xoa_kiTu_khoangTrang_giuaChuoi (c) ;
	printf ("\nChuoi sau khi xoa cac ki tu khoang trang o giua :%s", c) ; 
	printf ("\nDo dai cua chuoi vua xoa cac ki tu khoang trang o giua : %d", strlen (c)) ;
	return 0 ; 
}

char *xoa_kiTu_khoangTrang_dauChuoi (char c[]) 
{
	int i = 0 ; 
	while (c[i] == ' ')
	{
		i++ ; // vi tri i se tang len gap != khoang trang thi dung
	}
	if (i > 0) 
	{
		strcpy (&c[0] , &c[i]) ; // strcpy (chuoi1 , chuoi2) : sao chep (gan) chuoi1 thanh chuoi2 
	}
	return c ; 
}

char *xoa_kiTu_khoangTrang_cuoiChuoi (char c[]) 
{
	int i = strlen (c) - 1 ; 
	while (c[i] == ' ')
	{
		i-- ; // vi tri i se giam xuong gap != khoang trang thi dung
	}
	c[i + 1] = '\0' ; // NULL
	return c ; 
}

char *xoa_kiTu_khoangTrang_giuaChuoi (char c[])
{
	xoa_kiTu_khoangTrang_dauChuoi (xoa_kiTu_khoangTrang_cuoiChuoi (c)) ; // xoa ki tu khoang trang o dau chuoi o ham xoa ki tu khoang trang o cuoi chuoi
	char *c1 = strstr (c , " " ) ; // strstr (chuoi1 , chuoi2) : tim chuoi2 trong chuoi1 , neu khong tim thay chuoi2 thi tra ve NULL
	while (c1 != NULL) //  trong khi 2 o trong thi thoat ra 
	{
		strcpy (c1 , c1 + 1) ; // xoa di 1 khoang trang
		c1 = strstr (c , " ") ;
	}
	return c ; 
}

//void xoa_kiTu_khoangTrang_dauChuoi (char c[])
//{
//	while (c[0] == ' ')
//	{
//		strcpy (&c[0] , &c[1]) ;  
//	}
//}
//
//void xoa_kiTu_khoangTrang_cuoiChuoi (char c[])
//{
//	while (c[strlen (c) - 1] == ' ')
//	{
//		strcpy (&c[strlen (c) - 1] , &c[strlen (c)]) ;  
//	}
//}
//
//void xoa_kiTu_khoangTrang_giuaChuoi (char c[]) 
//{
//	for (int i = 0 ; i < strlen (c) ; i++)
//	{
//		if (c[i] == ' ' && c[i + 1] == ' ')
//		{
//			strcpy (&c[i] , &c[i + 1]) ;
//			i-- ;
//		} 
//	}
//}

//#include <stdio.h>
//#include <string.h>
///
//int demSotu (char c[]) ; 
//void xoa1kitu (char c[] , int vitrixoa) ;
//void xoa_kiTu_khoangTrang_dauChuoi (char c[]) ; 
//void xoa_kiTu_khoangTrang_cuoiChuoi (char c[]) ; 
//
//int main ()
//{
//	char c[100] ; 
//	printf ("Nhap chuoi di ban oi : ") ;
//	gets (c) ; 
//	printf ("Chuoi vua nhap ne :%s", c) ; 
//	printf ("\nCo %d tu xuat hien trong chuoi", demSotu (c)) ; 
//	xoa_kiTu_khoangTrang_dauChuoi (c) ; 
//	xoa_kiTu_khoangTrang_cuoiChuoi (c) ;
//	printf ("\nChuoi sau khi duoc xu li :%s", c) ; 
//	return 0 ; 
//}
//
//int demSotu (char c[])
//{
//	// tu la ki tu dung dau hoac sau khoang trang
//	int dem = (c[0] != ' ') ;
//	for (int i = 0 ; i < strlen (c) ; i++)
//	{
//		if (c[i] == ' ' && c[i + 1] != ' ' ) 
//		{
//			dem++ ; 
//		}
//	}
//	return dem ; 
//}
//
//// xoa ki tu tai vi tri bat ki trong chuoi
//void xoa1kitu (char c[] , int vitrixoa)
//{
//	int n = strlen (c) ;
//	for (int i = vitrixoa + 1 ; i < n ; i++)
//	{
//		c[i - 1] = c[i] ; // vi tri 5 la '\0' sau khi xoa => '\0' la vi tri 4 
//	}
//	c[n--] != '\0' ; // chuoi giam di 1 ki tu - vi tri cuoi chuoi no phai khac '\0' 
//}
//
//void xoa_kiTu_khoangTrang_dauChuoi (char c[]) 
//{
//	// vong lap vo tan , lap tu dau chuoi - gap ki tu khoang trang thi xoa di - cho den khi gap ki tu != khoang trang thi dung`
//	while (true)
//	{
//		if (c[0] == ' ')
//		{
//			xoa1kitu (c , 0) ; // xoa di ki tu khoang trang o vi tri 0 
//		}
//		else 
//		{
//			break ; // khi xoa dc khoang trang o dau thi thoat khoi vong lap
//		}
//	}
//}
//
//void xoa_kiTu_khoangTrang_cuoiChuoi (char c[])
//{
//	// vong lap vo tan , lap tu cuoi chuoi - gap ki tu khoang trang thi xoa di - cho den khi gap ki tu != khoang trang thi dung`
//	while (true)
//	{
//		if (c[strlen (c) - 1] == ' ')
//		{
//			xoa1kitu (c , strlen (c) - 1) ; // xoa di ki tu khoang trang o vi tri strlen (c) - 1
//		}
//		else 
//		{
//			break ; // khi xoa dc khoang trang o cuoi thi thoat khoi vong lap
//		}
//	}
//}

