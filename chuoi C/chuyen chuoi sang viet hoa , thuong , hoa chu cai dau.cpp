#include <stdio.h>
#include <string.h>

void vietThuong (char c[]) ; 
void vietHoa (char c[]) ; 
void vietHoa_Chudau (char c[]) ; 

int main ()
{
	char c[100] ; 
	printf ("Nhap chuoi di lam on , tao lay may do : ") ; 
	gets (c) ; 
	printf ("Chuoi cua may vua nhap ne condi : %s", c) ; 
	printf ("\nChuoi cua may sau khi da chuyen sang viet thuong het : ") ; 
	vietThuong (c) ; 
	printf ("\nChuoi cua may sau khi da chuyen sang viet hoa het : ") ;
	vietHoa (c) ; 
	printf ("\nChuoi cua may sau khi da chuyen sang viet hoa cac chu cai dau : ") ;
	vietHoa_Chudau (c) ; 
	return 0 ; 
}

void vietThuong (char c[]) 
{
	for (int i = 0 ; i < strlen (c) ; i++)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
		{
			c[i] += 32 ; 
		}
	}
	printf ("%s", c) ; 
}

void vietHoa (char c[]) 
{
	for (int i = 0 ; i < strlen (c) ; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32 ; 
		}
	}
	printf ("%s", c) ;
}

void vietHoa_Chudau (char c[])
{
	for (int i = 0 ; i < strlen (c) ; i++)
	{
		// c[0] viet hoa hoac la dung sau khoang trang thi viet hoa
		if (i == 0 || (i > 0 && c[i - 1] == ' ')) 
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] -= 32 ; 
			}
		}
		// con lai viet thuong het 
		else 
		{ 
			if (c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] += 32 ; 
			}
		}
	}
	printf ("%s", c) ;
}




