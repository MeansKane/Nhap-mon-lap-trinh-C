#include <stdio.h>
#include <string.h>

int main ()
{
	char s1[21], s2[21];
	printf ("Enter string s1 : ");
	gets(s1);
	printf ("Enter string s2 : ");
	gets(s2);
	printf ("Lenghths of s1 : %d, s2 : %d\n", strlen(s1), strlen(s2));// do dai cua chuoi s va s2
	printf ("Compare s1 with s2 : %d\n", strcmp(s1, s2));// so sanh chuoi s1 voi s2
	strupr(s1);// viet hoa tat ca
	printf ("Uppercase s1 : %s\n", s1);
//	strcat(s1, " ");// them dau cach vao cuoi chuoi s1
	strcat(s1, s2);// noi chuoi s2 vao cuoi s1
	printf ("After append s2 to s1 :%s\n", s1);
	char s3[10];
	printf ("Enter a sub-string of s1 : ");
	gets(s3);
	char *ptr = strstr(s1, s3);// tim chuoi s3 trong s1
	printf ("Address of s1 : %u\n", s1);
	printf ("Address of s3 : %u\n", s3);
	printf ("Address of substring : %d\n", ptr);
	return 0;
}
