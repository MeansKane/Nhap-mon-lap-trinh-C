#include <stdio.h>
#include <math.h>

int in_ra_cac_so_ngto2n(int n);
int kiem_tra_ngay_hop_le(int d , int m , int y);
int xet_vi_tri_tuong_doi(int x , int y , int r);
double so_n_fibo(int n);
int tim_uoc_chung_lon_nhat(int a , int b);
int tim_boi_chung_nho_nhat(int a , int b);
void tim_min_max(int n);

int main (){
	printf ("1) Viet chuong trinh in ra cac so nguyen to tu 2 - n");
	printf ("\n2) Viet chuong trinh nhap ngay thang nam , kiem tra xem co hop le hay khong");
	printf ("\n3) Viet chuong trinh nhap toa do diem (x,y) va ban kinh R, xét vi tri tuong doi cua diem so voi duong tron");
	printf ("\n4) Viet chuong trinh nhap in ra so hang thu n cua day so Fibonacci");
	printf ("\n5) Viet chuong trinh nhap 2 so nguyen duong, tim uoc chung lon nhat va boi chung nho nhat");
	printf ("\n6) Viet chuong trinh nhap so nguyen khong am, in ra chu so lon nhat va nho nhat (n=10293 => max=9 min=3)");
	int n , x , r , a , b; 
	int d , m , y ; 
 	int chon_bai;
 	do {
	printf ("\nChon de bai di ban oi !");
	scanf ("%d", &chon_bai);
		switch (chon_bai){
			case 1 : 
				do {
					printf ("Nhap n : ");
					scanf ("%d", &n);	
				} while (n < 2);
				for (int i = 2 ; i <= n ; i++){
					if (in_ra_cac_so_ngto2n(i)){
						printf ("%d\t", i);
					}	
				}
				break ; 
			case 2 : 
				printf ("Nhap ngay / thang / nam : ");
				scanf ("%d %d %d", &d , &m , &y);
				if (kiem_tra_ngay_hop_le(d , m , y)){
					printf ("Ngay hop le");	
				}
				else {
					printf ("Khong hop le");	
				}
				break ; 
			case 3 : 
				printf ("Nhap toa do diem (x,y) : ");
				scanf ("%d %d", &x , &y);
				do {
					printf ("Nhap ban kinh : ");
					scanf ("%d", &r);
				}	while (r < 0);
				int vi_tri ;
				vi_tri =  xet_vi_tri_tuong_doi(x , y , r);
				if (vi_tri == 1){
					printf ("Nam trong duong tron");	
				}
				else if (vi_tri == 0){
					printf ("Nam tren duong tron");	
				}
				else {
					printf ("Nam ngoai duong tron");	
				}
				break ;
			case 4 : 
				do {
					printf ("Nhap n : ");
					scanf ("%d", &n);	
				}	while (n < 1); 
				double  fibo ;
				fibo = so_n_fibo(n);
				printf ("So n cua day Fibonacci : %.0lf", fibo);
				break ; 
			case 5 : 
				do {
					printf ("Nhap a va b : ");
					scanf ("%d %d", &a , &b);
				}	while (a < 0 || b < 0);
				int c ; 
				c = tim_uoc_chung_lon_nhat(a , b);
				int d ; 
				d = tim_boi_chung_nho_nhat(a , b);
				printf ("Uoc chung lon nhat : %d", c);
				printf ("\nBoi chung nho nhat : %d", d);
				break ; 
			case 6 : 
				do {
					printf ("Nhap n : ");
					scanf ("%d", &n); 
					tim_min_max(n);
				}	while (n < 0);
				break ; 
		}
	} while (chon_bai <= 6 && chon_bai >= 1);
return 0 ; 
}

int in_ra_cac_so_ngto2n(int n){
	int mark = 1 ; 
	for (int i = 2 ; i <= sqrt(n) ; i++){
		if (n % i == 0){
			mark = 0 ; // khong phai so nguyen to
			break ; 
		}		
		else {
			mark = 1 ; // la so nguyen to 
		}
	}
return mark ; 	
}

int kiem_tra_ngay_hop_le(int d , int m , int y){
	int maxd = 31 ; 
	if (d < 1 || d > 31 || m < 1 || m > 12){
		maxd = 0 ; 	
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11){
		maxd = 30 ; 	
	}
	else if (m == 2){
		if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)){
			maxd = 29 ; 
		}	
		else {
			maxd = 28 ; 
		}	
	}
return d <= maxd ; 
}

int xet_vi_tri_tuong_doi(int x , int y , int r){
	int vi_tri = 0 ; 
	double d2 = x * x + y * y ; 
	double r2 = r * r ; 
	if (d2 < r2){
		vi_tri = 1 ; // nam trong  	
	}
	else if (d2 = r2){
		vi_tri = 0 ; // nam tren 	
	}
	else {
		vi_tri = -1 ; // nam ngoai 	
	}
return vi_tri ; 
}

double so_n_fibo(int n){
	int t1 = 1 , t2 = 1 , f = 1 ; 
	for (int i = 3 ; i <= n ; i++){
		f = t1 + t2 ; 
		t1 = t2;
		t2 = f; 
	}	
return f ; 
}

int tim_uoc_chung_lon_nhat(int a , int b){
	while (a != b){
		if (a > b){
			a = a - b ;
		}
		else { 
			b = b - a ;
		}	
	}
return a ; 
}

int tim_boi_chung_nho_nhat(int a , int b){
return a * b / tim_uoc_chung_lon_nhat(a , b);	
}

void tim_min_max(int n){
	int so_du ; 
	int min , max ; 
	so_du = n % 10 ; // 10293 lay so 3 
	n = n / 10 ; // lay tiep cac so con lai
	min = max = so_du ; 
	while (n > 0){
		so_du = n % 10 ; // tiep tuc lay tiep so du  
		n = n /10 ; 	
		if (min > so_du){
			min = so_du ; 	
		}
		else if (max < so_du){
			max = so_du ; 	
		}
	}
	printf ("Max = %d", max);
	printf ("\nMin = %d", min);
}
