#include <stdio.h>
int main (){
	printf ("Hay chon hinh:\n A:Hinh tam giac\n B:Hinh chu nhat\n C:Hinh tron\n D:Ket thuc\n");
	int a,b,c;
	int r;
	int dientich=0;
	char hinh;
	scanf ("%c",&hinh);
	switch(hinh){
		case 'A':
			printf ("Hay nhap 3 canh cua tam:");
			scanf ("%d%d%d",&a,&b,&c);
			if ((a*a)+(b*b)==c*c){
				printf ("Dien tich = %d",dientich=(a*b)/2);
			}
			else {
				printf ("Hay nhap lai 3 canh\n");
			}
			break;
		case 'B':
			printf ("Hay nhap vao chieu dai va chieu rong:");
			scanf ("%d%d",&a,&b);
			printf ("Dien tich = %d",dientich=a*b);
			break;
		case 'C':
			printf ("Hay nhap vao ban kinh:");
			scanf ("%d",&r);
			printf ("Dien tich = %d",dientich=3.14*(r*r));
			break;
		case 'D':
			printf ("Ket thuc chuong trinh");
			break;
	}
	
		
}
