#include <stdio.h>
#include <string.h>

void xoaspacedau (char c[])
{
	while (c[0] == ' ')// neu ki tu dau tien la khoang trang 
	{
		// thi gan ki tu sau cho ki tu dau tien den khi nao ki tu dau khac khoang trang thi dung
		strcpy(&c[0], &c[1]);
	}
}

void xoaspacecuoi (char c[])
{
	while (c[strlen(c) - 1] == ' ')// neu ki tu cuoi != '\0' la khoang trang
	{
		// thi gan ki tu truoc cho ki tau cuoi ki tu cuoi != '\0' den khi nao ki tu cuoi != '\0' thi dung 
		strcpy(&c[strlen(c) - 1], &c[strlen(c)]);
	}
}

void xoaspacegiua (char c[])
{
	for (int i = 0; i < strlen(c); i++)
	{
		// neu ki tu truoc va sau deu la khoang trang 
		if (c[i] == ' ' && c[i + 1] == ' ') 
		{
			// thi gan ki tu sau cho ki tu truoc den khi nao ki tu sau khac khoang trang thi dung 
			strcpy(&c[i], &c[i  + 1]);
			i--;// so luong chuoi phai giam di neu khong giam thi se bi loi ki tu trong
		}
	}
}

void viethoachudau (char c[])
{
	for (int i = 0; i < strlen(c); i++)
	{
		// ki tu dau hoac ki tu dung sau khoang trang
		if (i == 0 || (i > 0 && c[i - 1] == ' '))
		{
			// thi viet hoa
			strupr(&c[i]);	
		}
		else // nguoc lai 
		{
			// viet thuong
			strlwr(&c[i]);
		}
	}
}

int main ()
{
	char c[100];
	gets(c);
	printf ("Chuoi goc : [ '%s' ]", c);
	xoaspacedau(c);
	xoaspacecuoi(c);
	xoaspacegiua(c);
	printf ("\nLoai space du : [ '%s' ]", c);
	viethoachudau(c);
	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == '?')
		{
			c[i] = ',';
		}
	}
	printf ("\nCac tu da chuan hoa :\n   %s", c);
	return 0;
}
