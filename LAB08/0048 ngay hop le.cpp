#include <stdio.h>

int ngay_hop_le(int d , int m , int y);

int main (){
	int d , m , y ;
	printf ("Nhap ngay / thang / nam : ");
	scanf ("%d  %d  %d", &d , &m , &y);
	if ( ngay_hop_le(d, m , y)){
		printf ("Hop le");
	}
	else {
		printf ("Kh hop le");
	}
	return 0 ;
}

int ngay_hop_le(int d , int m , int y){
	int max_d = 31;
	if (d < 1 || d > 31 || m < 1 || m > 12){
		return 0 ;
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11){
		max_d  = 30;
	}
	else if (m == 2){
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
			max_d = 29;
		}
		else max_d = 28 ;
	}
	return d <= max_d;
}
