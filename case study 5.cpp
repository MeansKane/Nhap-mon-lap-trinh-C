//#include<stdio.h>
//#define COST_N 115
//#define COST_O 120
//#define COST_P 100
//
//int input_ID();
//char type_cust();
//int input_networker_days();
//int input_administrator_days();
//int input_programmer_days();
//int cal_cost(char type,int N, int O, int P);
//void output(int sum,char type, int N, int O, int P);
//
//int main (){
//	int ID,networker_days,programmer_days,administrator_days, sum = 0 ;
//	char type; 
//	ID = input_ID();
//	type = type_cust();
//	networker_days = input_networker_days();
//	administrator_days = input_administrator_days();
//	programmer_days = input_programmer_days();
//	sum = cal_cost(type, networker_days, programmer_days, administrator_days);
//	output(ID, type,networker_days, administrator_days, programmer_days);
//	return 0;
//}
//
//int input_ID(){
//	int a ;
//	printf ("ID number (4 digit integer between 1000 and 9999 inclusive.) : ");
//	scanf ("%d", &a);
//	do {
//		if (a <= 1000 || a >= 9999){
//			printf ("Re-enter ID number (4 digit integer between 1000 and 9999 inclusive.) : ");
//			fflush(stdin);
//			scanf ("%d", &a);
//		}	 
//	} while (a <= 1000 || a >= 9999);
//	return a;
//}
//char type_cust(){
//	char t;
//	printf ("The type of customer (R regular or C casual) : ");
//	fflush(stdin);
//	scanf ("%c", &t);
//	return t;
//}
//int input_networker_days(){
//	int b;	
//	printf ("The number of required networker days (>0) : ");
//	scanf ("%d", &b);
//	do {
//		if (b < 0){
//			printf ("Re-enter networker days (>0) : ");
//			fflush(stdin);
//			scanf ("%d", &b);
//		}	 
//	} while (b < 0);
//
//	return b;
//}
//
//int input_administrator_days(){
//	int c;
//	printf ("The number of required office administrator days (>0) : ");
//	scanf ("%d", &c);
//	do {
//		if (c < 0){
//			printf ("Re-enter office administrator days (>0) : ");
//			fflush(stdin);
//			scanf ("%d", &c);
//		}	 
//	} while (c < 0);
//	return c;
//}
//
//int input_programmer_days(){
//	int d;
//	printf ("The number of required  programmer days (>0) : ");
//	scanf ("%d", &d);
//	do {
//		if (d < 0){
//			printf ("Re-enter programmer days (>0) : ");
//			fflush(stdin);
//			scanf ("%d", &d);
//		}	 
//	} while (d < 0);
//	return d;
//}
//
//int cal_cost(char type, int N, int O, int P){
//	int sum = 0;
//	int sum1 = 0;
//	sum = N * COST_N + O * COST_O + P * COST_P;
//	if (type == 'R'){
//		sum1 = sum * 0.95;
//	}
//	else {
//		sum1 = sum;
//	}
//	return sum1; 
//}
//
//void output(int ID,char type,int N, int O, int P){
//	printf ("Cust ID:  %d\n", ID);
//	printf ("The type of customer : %c\n", type);
//	printf ("Profession       Days       Cost\n");
//	printf ("\n============================================\n");
//	printf ("Networker         %d          %d\n ", N,N * COST_N);
//	printf ("Administrator     %d          %d\n ", O,O * COST_O);
//	printf ("Programmer        %d          %d\n ", P,P * COST_P);
//	printf ("\n============================================\n");
//	printf ("Total cost                     %d ", cal_cost(type,N,O,P));
//}



#include <stdio.h>
#define gia_N 115
#define gia_O 120
#define gia_P 100

int nhap_id();
int nhap_loai_khach_hang();
int nhap_so_ngay_N();
int nhap_so_ngay_O();
int nhap_so_ngay_P();
int tinh_tong(char loai_khach_hang , int ngay_N ,int ngay_O ,int ngay_P);
void output_tong_tien(int id , char loai_khach_hang, int ngay_N ,int ngay_O ,int ngay_P);

int main (){
	int id, ngay_N , ngay_O , ngay_P;
	float sum = 0;
	char loai_khach_hang; 
	id = nhap_id();
	loai_khach_hang = nhap_loai_khach_hang();
	ngay_N = nhap_so_ngay_N();
	ngay_O = nhap_so_ngay_O();
	ngay_P = nhap_so_ngay_P();
	sum = tinh_tong(loai_khach_hang ,ngay_N , ngay_O , ngay_P);
	output_tong_tien(id , loai_khach_hang , ngay_N , ngay_O , ngay_P);
	return 0;
}

int nhap_id(){
	int id ;
	printf ("Nhap ID (1000 -> 9999): ");
	scanf ("%d", &id);
	do {
		if (id < 1000 || id >9999){
			printf ("Nhap lai ID  (1000 -> 9999): ");
			scanf ("%d", &id);
		}
	} while (id < 1000 || id >9999);

	return id;
}

int nhap_loai_khach_hang(){
	char loai_khach_hang;
	printf ("Nhap loai khach hang (R/C) : ");
	fflush(stdin);
	scanf ("%c", &loai_khach_hang);
	do{
		if (loai_khach_hang != 'R' && loai_khach_hang != 'C'){
			printf ("Nhap lai loai khach hang (R/C) : ");
			fflush(stdin);
			scanf ("%c", &loai_khach_hang);	
		}
	} while (loai_khach_hang != 'R' && loai_khach_hang != 'C');
	return loai_khach_hang;
}

int nhap_so_ngay_N(){
	int ngay_N;
	printf ("Nhap so ngay thue nhan vien N (> 0): ");
	scanf ("%d", &ngay_N);
	do {
		if (ngay_N <= 0){
			printf ("Nhap lai so ngay thue nhan vien N (> 0): ");
			scanf ("%d", &ngay_N);	
		}
	} while (ngay_N <= 0);
	return ngay_N;
}

int nhap_so_ngay_O(){
	int ngay_O;
	printf ("Nhap so ngay thue nhan vien O (> 0): ");
	scanf ("%d", &ngay_O);
	do {
		if (ngay_O <= 0){
			printf ("Nhap lai so ngay thue nhan vien O (> 0): ");
			scanf ("%d", &ngay_O);		
		}	
	} while (ngay_O <= 0);
	return ngay_O;
}

int nhap_so_ngay_P(){
	int ngay_P;
	printf ("Nhap so ngay thue nhan vien P (> 0): ");
	scanf ("%d", &ngay_P);
	do {
		if (ngay_P <= 0){
			printf ("Nhap so lai ngay thue nhan vien P (> 0): ");
			scanf ("%d", &ngay_P);	
		}
	} while (ngay_P <= 0);
	return ngay_P;
}

int tinh_tong(char loai_khach_hang , int ngay_N ,int ngay_O ,int ngay_P){
	float sum = 0;
	if (loai_khach_hang == 'R'){
		sum = (ngay_N * gia_N + ngay_O * gia_O + ngay_P * gia_P) * 95/100;
	}
	if (loai_khach_hang == 'C'){
		sum = ngay_N * gia_N + ngay_O * gia_O + ngay_P * gia_P;
	}
	return sum;
}

void output_tong_tien(int id , char loai_khach_hang, int ngay_N ,int ngay_O ,int ngay_P){
	printf ("Id khach hang       %d\n", id);
	printf ("Loai khach hang     %c\n", loai_khach_hang);
	printf ("Nhan vien             So ngay thue                    Gia tien");
	printf ("\n==============================================================\n");
	printf ("Networker                 %d                            %d\n", ngay_N , ngay_N * gia_N);
	printf ("Office                	  %d                            %d\n", ngay_O , ngay_O * gia_O);
	printf ("Programmer                %d                            %d\n", ngay_P , ngay_P * gia_P);
	printf ("\n==============================================================\n");
	printf ("Tong tien                                              %d", tinh_tong(loai_khach_hang , ngay_N , ngay_O , ngay_P));
}


