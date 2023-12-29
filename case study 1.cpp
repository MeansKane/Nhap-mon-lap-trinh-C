//#include<stdio.h>
//#define COST_N 115
//#define COST_O 120
//#define COST_P 100
//
//int input_ID();
//int input_networker_days();
//int input_administrator_days();                         
//int input_programmer_days();
//int cal_cost(int N, int O, int P);
//void output(int sum);
//
//int main (){
//	int ID,networker_days,programmer_days,administrator_days, sum = 0; 
//	ID = input_ID();
//	networker_days = input_networker_days();
//	administrator_days = input_administrator_days();
//	programmer_days = input_programmer_days();
//	sum = cal_cost(networker_days, administrator_days, programmer_days);
//	output(sum); 
//	return 0;
//}
//
//int input_ID(){
//	int a ;
//	printf ("ID number : ");
//	scanf ("%d", &a);
//	return a;
//}
//
//int input_networker_days(){
//	int b;
//	printf ("The number of required networker days : ");
//	scanf ("%d", &b);
//	return b;
//}
//
//int input_administrator_days(){
//	int c;
//	printf ("The number of required office administrator days : ");
//	scanf ("%d", &c);
//	return c;
//}
//
//int input_programmer_days(){
//	int d;
//	printf ("The number of required programmer days : ");
//	scanf ("%d", &d);
//	return d;
//}
//
//int cal_cost(int N, int O, int P){
//	int sum = 0;
//	sum = N * COST_N + O * COST_O + P * COST_P;
//	return sum; 
//}
//
//void output(int sum){
//	printf ("Total cost : %d", sum);
//}

#include <stdio.h>
#define gia_N 115
#define gia_O 120
#define gia_P 100

int nhap_id();
int nhap_so_ngay_N();
int nhap_so_ngay_O();
int nhap_so_ngay_P();
int tinh_tong(int ngay_N ,int ngay_O ,int ngay_P);
void output_tong_tien(float sum);

int main (){
	int id, ngay_N , ngay_O , ngay_P;
	float sum = 0;
	id = nhap_id();
	ngay_N = nhap_so_ngay_N();
	ngay_O = nhap_so_ngay_O();
	ngay_P = nhap_so_ngay_P();
	sum = tinh_tong(ngay_N , ngay_O , ngay_P);
	output_tong_tien(sum);
	return 0;
}

int nhap_id(){
	int id ;
	printf ("Nhap ID : ");
	scanf ("%d", &id);
	return id;
}

int nhap_so_ngay_N(){
	int ngay_N;
	printf ("Nhap so ngay thue nhan vien N : ");
	scanf ("%d", &ngay_N);
	return ngay_N;
}

int nhap_so_ngay_O(){
	int ngay_O;
	printf ("Nhap so ngay thue nhan vien O : ");
	scanf ("%d", &ngay_O);
	return ngay_O;
}

int nhap_so_ngay_P(){
	int ngay_P;
	printf ("Nhap so ngay thue nhan vien P : ");
	scanf ("%d", &ngay_P);
	return ngay_P;
}

int tinh_tong(int ngay_N ,int ngay_O ,int ngay_P){
	int sum = 0;
	sum = ngay_N * gia_N + ngay_O * gia_O + ngay_P * gia_P;
	return sum;
}

void output_tong_tien(float sum){
	printf ("Total cost : %.2f", sum);
}
