#include <stdio.h>
#include <string.h>

void nhapChuoi (char s[]);
void xuatChuoi (char s[]);  
int my_strcmp (char s1[] , char s2[]); 

int main ()
{
	char s1[100] , s2[100] ; 
	printf ("a) Nhap vao 2 chuoi du lieu s1 va s2.");
	printf ("\nNhap chuoi 1 di ban oi : "); 
	nhapChuoi (s1) ;
	printf ("Nhap chuoi 2 di ban oi : "); 
	nhapChuoi (s2) ;
	printf ("\n") ;
	printf ("b) Xuat ra man hinh 2 chuoi vua nhap.");
	printf ("\nXuat chuoi 1 :  "); 
	xuatChuoi (s1) ; 
	printf ("\nXuat chuoi 2 :  "); 
	xuatChuoi (s2) ; 
	printf ("\n") ;
	printf ("\nc) Do dai cua 2 chuoi vua nhap.");
	printf ("\nDo dai cua chuoi 1 : %d", strlen (s1));
	printf ("\nDo dai cua chuoi 2 : %d", strlen (s2));
	printf ("\n") ;
	printf ("\nd) So sanh 2 chuoi vua nhap.\n");
	// so sanh theo bang ma ASCII 
	/*
		so sanh 2 chuoi : strcmp (chuoi 1 , chuoi 2) 
		- so sanh tung ki tu bat dau bang vi tri dau tien cua chuoi 1 va chuoi 2 
		+ neu thay su khac biet thi : 
		==> tra ve gia tri nguyen > 0 : chuoi 1 > chuoi 2 
		==> tra ve gia tri nguyen < 0 : chuoi 1 < chuoi 2	
		+ khong thay su khac biet 
		==> tra ve gia tri nguyen == 0 : chuoi 1 giong chuoi 2  
	*/ 
//	if (strcmp (s1 , s2) < 0) 
//	{
//		printf ("Chuoi 1 nho hon chuoi 2 !"); 
//	}
//	else if (strcmp (s1 , s2) == 0)
//	{
//		printf ("Chuoi 1 giong chuoi 2 !"); 
//	}
//	else if (strcmp (s1 , s2) > 0)
//	{
//		printf ("Chuoi 1 lon hon chuoi 2 !"); 
//	}
	
	if (my_strcmp (s1 , s2) == -1) 
	{
		printf ("Chuoi 1 nho hon chuoi 2 !"); 
	}
	else if (my_strcmp (s1 , s2) == 0)
	{
		printf ("Chuoi 1 giong chuoi 2 !"); 
	}
	else if (my_strcmp (s1 , s2) == 1)
	{
		printf ("Chuoi 1 lon hon chuoi 2 !"); 
	}
	printf ("\n");
	printf ("\ne) Noi chuoi 2 vao chuoi 1.");
	printf ("\nSau khi da noi : %s", strncat(s1 , s2 , 100)); // noi n ki tu cua chuoi 2 vao chuoi 1 
	printf ("\n");
	printf ("\nf) Kiem tra xem chuoi 2 co nam trong chuoi 1.");
	/*
		tim chuoi 2 trong chuoi 1 
		- dung ham con tro *strstr (chuoi 1 , chuoi 2) 
		+ neu tim thay vi tri dau tien cua chuoi 2 trong chuoi 1 
		==> chuoi 1 chua chuoi 2 !
		+ neu khong tim thay vi tri dau tien cua chuoi 2 trong chuoi 1 hoac = NULL 
		==> khong tim thay chuoi 2 trong chuoi 1 !
	*/	
	if (*strstr (s1 , s2) == s1[0])
	{
		printf ("\nTim thay chuoi 2 trong chuoi 1 !");
	}
	else 
	{
		printf ("\nKhong tim thay chuoi 2 trong chuoi 1 !");	
	}
	return 0 ; 
}

void nhapChuoi (char s[])
{
	gets (s) ; 
}

void xuatChuoi (char s[])
{
	printf ("%s", s) ;
}

int my_strcmp (char s1[] , char s2[])
{
	/* vd : s1 = "abc"
			s2 = "abc def"
	*/		
	// duyet tu dau chuoi den cuoi chuoi cua cua CHUOI CO DO DAI NHO HON 
	int doDai_min = strlen (s1) < strlen (s2) ? strlen (s1) : strlen (s2) ; // neu strlen (s1) < strlen (s2) thi tra ve strlen (s1) nguoc lai thi tra ve strlen (s2)
	// duyet tung ki tu de so sanh 
	for (int i = 0 ; i < doDai_min ; i++)
	{
		if (s1[i] > s2[i])
		{
			return 1 ; 
		}
		else if (s1[i] < s2[i])
		{
			return -1 ;
	}
	// neu ket thuc vong lap for ma chua thay su khac biet thi kiem tra do dai cua s1 va s2 xem thang nao lon hon 
	if (strlen (s1) > strlen (s2))
	{
		return 1 ;
	}
	else if (strlen (s1) < strlen (s2))
	{
		return -1 ; 
	}
	return 0 ; // 2 chuoi giong nhau
	} 
 }
 

