#include <stdio.h>
#include <string.h>

int main ()
{
	char s1[21], s2[21];// khai bao 2 bien s1, s2 kieu char
	printf ("Enter string s1 : ");
	gets(s1);// nhap chuoi s1
	printf ("Enter string s2 : ");
	gets(s2);// nhap chuoi s2
	printf ("Length of s1 : %d, s2 : %d\n", strlen(s1), strlen(s2)); // in ra do dai ki tu cua chuoi s1 va s2
	printf ("Compare s1 with s2 : %d\n", strcmp(s1, s2));// so sanh chuoi s1 va s2
	strupr(s1);// viet hoa chuoi s1 
	printf ("Uppercase s1 : %s\n", s1);// in ra chuoi s1 sau khi da viet hoa 
	strcat(s1, s2);// noi chuoi 2 vao chuoi 1
	printf ("After append s2 to s1 : %s\n", s1); // in ra chuoi s1 sau khi noi 
	char s3[10];// khai bao bien s3 kieu char
	printf ("Enter a sub-string of s1: ");
	gets(s3);// nhap chuoi s3
	char *ptr = strstr(s1, s3);// tim chuoi s3 trong chuoi s1
	printf ("Address of s1 : %u\n", s1);// dia chi chuoi s1 
	printf ("Address of s3 : %u\n", s3);// dia chi chuoi s3
	printf ("Address of sub-string : %u\n", ptr);// dia chi chuoi con
	return 0;
}
