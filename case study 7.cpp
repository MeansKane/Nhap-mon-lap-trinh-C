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
	int id, ngay_N = 0 , ngay_O = 0, ngay_P = 0;
	float sum = 0, sum_bu_hon = 0;
	char loai_khach_hang, Y_or_N,chon_nhan_vien; 
	int dem_id = 0 , dem_R = 0 , dem_C = 0 , dem_ngay = 0 , dem_N = 0, dem_O = 0 , dem_P = 0;
	do {
		id = nhap_id();
		dem_id++;
		loai_khach_hang = nhap_loai_khach_hang();
		if (loai_khach_hang == 'R'){
			dem_R++;
		}
		if (loai_khach_hang == 'C'){
			dem_C++;
		}
		do{
		printf ("Nhap loai nhan nhan vien muon thue : ");
		fflush(stdin);
		scanf ("%c", &chon_nhan_vien);
		
			if (chon_nhan_vien == 'N'){
				ngay_N = nhap_so_ngay_N();
				dem_N += ngay_N;
			}
			if (chon_nhan_vien == 'O'){
				ngay_O = nhap_so_ngay_O();
				dem_O += ngay_O;
			}
			if (chon_nhan_vien == 'P'){
				ngay_P = nhap_so_ngay_P();
				dem_O += ngay_P;
			}
		} while (chon_nhan_vien != 'X' || (chon_nhan_vien == 'N' , chon_nhan_vien == 'O' , chon_nhan_vien == 'P'));
		sum =  tinh_tong(loai_khach_hang , ngay_N , ngay_O , ngay_P);
		sum_bu_hon += sum;
		dem_ngay =  dem_N + dem_O + dem_P;
		output_tong_tien(id , loai_khach_hang , ngay_N , ngay_O , ngay_P);	
		printf ("\nBan co muon nhap tiep (Y/N)? ");
		fflush(stdin);
		scanf ("%c", &Y_or_N);
	} while (Y_or_N == 'Y' && Y_or_N != 'N');
	printf ("Tong so khach hang : %d\n", dem_id);
	printf ("So luong khach hang thuong xuyen (R) : %d\n", dem_R);
	printf ("So luong khach hang khong thuong xuyen (C) : %d\n", dem_C);
	printf ("Tong so ngay : %d\n", dem_ngay);
	printf ("Tong so chi phi : %.2f\n", sum_bu_hon);
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

