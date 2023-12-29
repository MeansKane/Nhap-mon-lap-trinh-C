#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cctype>

// xoa khoang trang o dau chuoi
char *ltrim (char s[])
{
	int i = 0;// khai bao bien chay i, chay tu dau chuoi
	while (s[i] == ' ')// neu ki tu tai vi tri i la khoang trang 
	{
		i++;// i tang 1 don vi den khi nao khac khoang trang thi dung
		if (i > 0)// neu i > 0 
		{
			strcpy(&s[0], &s[i]);// copy vi tri cua ki tu khoang trang vao ki tu dau tien
		}
	}
	return s;
}

// xoa khoang trang o cuoi chuoi
char *rtrim	(char s[])
{
	int i = strlen(s) - 1;// khai bao bien chay i, chay tu cuoi chuoi
	while (s[i] == ' ')// neu ki tu tai vi tri i la khoang trang
	{
		i--; // i giam 1 don vi den khi nao khac ki tu khoang trang thi dung 
		s[i + 1] = '\0';// ki tu khoang trang vua bi giam di thi thanh ki tu '\0' 
	}
	return s;
}

// xoa khoang trang o giua chuoi
char *trim (char s[])
{
	rtrim(ltrim(s));//xoa ki tu khoang trang o dau va cuoi chuoi
	char *ptr = strstr(s, "  ");// tao bien con tro, tro den vi tri cua ki tu  2 khoang trang trong chuoi s
	while (ptr != NULL)// neu tim thay ki tu khoang trang, khong tim thay thi dung
	{
		strcpy( ptr, ptr + 1);// copy ki tu sau khoang trang vao ki tu khoang trang 
		ptr = strstr(s, "  ");// 
	}
	return s;
}

char *nameStr (char s[])
{
	trim(s);// xoa tat cac ki tu khoang trang thua
	strlwr(s);// dua tat cac ki tu ve ki tu thuong
	int L = strlen(s);
	int i;
	for (i = 0; i < L; i++)//vong lap chay tu dau chuoi den cuoi chuoi
	{
		if (i == 0 || (i > 0 && s[i - 1]) == ' ')// ki tu dau tien va ki tu sau khoang trang se viet hoa
		{
			s[i] = toupper(s[i]);
		}
	}
	return s;
}

int main ()
{
	char s[21];
	printf ("Enter string s1 : ");
	gets(s);
	trim(s);
	printf ("After extra blanks remove :");
	puts(s);
	nameStr(s);
	printf ("After convert it to a name :");
	puts(s);
	return 0;
}
