#include <stdio.h>
#include <stdlib.h>
int KiemTraSo(char s[]);
int nhapcanhhv();
int main(int argc, char *argv[])
{
	int s = 0;
	int c_hv = 0;
	char canh_hv[4] = {'0','\0'};//"0"//"123\0"
	c_hv = nhapcanhhv();
	s = c_hv * c_hv;
	printf("%d\n",s);	
     
		
	
	return 0;
}
int KiemTraSo(char s[])
{
 int i = 0, dem = 0;
	while(s[i]!='\0')
	{
	 if(s[i] >='0' && s[i] <= '9') 
	 	dem++;
	 i++;	
	}
  return (dem == i);	
}

int nhapcanhhv()
{
	char s[10];
	do{
		printf("Nhap canh hinh vuong: ");
		scanf("%s",s);
	}while(KiemTraSo(s)!=1);
 return atoi(s);
}

