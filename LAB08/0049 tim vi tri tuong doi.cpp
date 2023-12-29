#include <stdio.h>

int vi_tri_tuong_doi(double x , double y , double r);
int main (){
	double x , y , r , ket_qua; 
	printf ("Nhap toa do (x , y) : ");
	scanf ("%lf %lf", &x , &y);
	do {
		printf ("Nhap ban kinh R : ");
		scanf ("%lf", &r);
	}	while (r < 0);
	ket_qua = vi_tri_tuong_doi(x , y , r);
	if (ket_qua == 1){
		printf ("Nam trong duong tron");
	}
	else if (ket_qua == 0){
		printf ("Nam tren duong tron");
	}
	else {
		printf ("Nam ngoai duong tron");
	}
	return 0 ; 
}
int vi_tri_tuong_doi(double x , double y , double r){
	double d2 = x * x + y * y ; 
	double r2 = r * r ; 
	if (d2 < r2){
		return 1 ;
	}
	else if (d2 == r2){
		return 0 ; 
	}
	else {
		return -1 ;
	}
}
