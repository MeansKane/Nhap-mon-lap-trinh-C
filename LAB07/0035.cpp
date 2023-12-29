#include <stdio.h>
#define ENTER 10
int main (){
	char c = 0;
	int chu_so = 0 , chu_cai = 0 , ki_tu_khac = 0;
	printf ("Hay nhap cac ki tu : ");
	while (c != ENTER){
		scanf ("%c", &c);
		if (c >= 0 && c <= 9){
			chu_so++;
		}
		else if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
			chu_cai++;
		}
		else {
			ki_tu_khac++;
		}
	}
	printf ("So luong chu so : %d\nSo luong chu cai : %d\nSo luong ki tu khac : %d", chu_so, chu_cai, ki_tu_khac);
	return 0;
}
