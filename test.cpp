#include<stdio.h>
struct sinhvien{
	char ten[100];
	int tuoi;
	char diachi[100];
};
typedef struct sinhvien sv;
void nhap1sinhvien(sv &a){
	printf("nhap ten: ");
	scanf("%s", &a.ten);
	printf("nhap tuoi: ");
	scanf("%d", &a.tuoi);
	printf("nhap dia chi: ");
	scanf("%s", &a.diachi);
}
void nhapdssv(sv a[], int n){
	for(int i = 0; i < n; i++){
		printf("sv %d: \n",i + 1);
		nhap1sinhvien(a[i]);
	}
}
void xuat1sv(sv a){
	printf("%s %d %s\n", a.ten, a.tuoi, a.diachi);
}
void xuatdssv(sv a[], int n){
	for(int i = 0; i < n; i++){
		xuat1sv(a[i]);
	}
}
int main(){
	sv a[100];
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	
	nhapdssv(a, n);
	xuatdssv(a, n);
	
	return 0;
}
