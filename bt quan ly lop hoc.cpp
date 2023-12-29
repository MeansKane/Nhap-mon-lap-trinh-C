#include <stdio.h>

void nhap_diem (float a[] , int &n); 
void xuat_diem (float a[] , int n); 
float diem_tb (float a[] , int n , float tb);
void liet_ke (float a[] , int n);
float tim_diem_max (float a[] , int n , float max);
int dem_max(float a[] , int n);
void thong_ke (float a[] , int n);

int main (){
	float a[100] , tb , max ; 
	int n , dem = 0 ; 
	nhap_diem (a , n);
	printf ("=========================================================");
	xuat_diem (a , n);
	printf ("=========================================================");
	printf ("\nDiem trung binh cua ca lop : %.2f", diem_tb (a , n , tb));
	liet_ke(a , n);
	printf ("=========================================================");
	printf ("\nDiem cao nhat cua lop : %.2f", tim_diem_max(a , n , max));
	printf ("\nCo %d sinh vien dat diem cao nhat! \n", dem_max(a , n));
	printf ("=========================================================");
	thong_ke(a , n); 
	return 0 ; 
}

void nhap_diem (float a[] , int &n){
	do {
		printf("Nhap so luong sinh vien : ");
		scanf ("%d", &n);		
	}	while (n <= 0 || n > 100); 
	printf ("Nhap diem sinh vien : \n");
	for (int i = 0 ; i < n ; i++){
		printf ("Sinh vien %d : ", i + 1);
		scanf ("%f", &a[i]);
	}
}

void xuat_diem (float a[] , int n){
	printf ("\nDiem thang 10      Diem chu\n");
	for (int i = 0 ; i < n ; i++){
		if (a[i] >= 0 && a[i] <= 3.9){
			printf ("%.1f                   F\n" , a[i]);
		}
		else if (a[i] > 3.9 && a[i] <= 5.4){
			printf ("%.1f                   D\n" , a[i]);
		}
		else if (a[i] > 5.4 && a[i] <= 6.9){
			printf ("%.1f                   C\n" , a[i]);
		}
		else if (a[i] > 6.9 && a[i] <= 8.4){
			printf ("%.1f                   B\n" , a[i]);
		}
		else if (a[i] > 8.4 && a[i] <= 10){
			printf ("%.1f                   A\n" , a[i]);
		}
	}
}

float diem_tb (float a[] , int n , float tb){
	float sum = 0 ; 
	for (int i = 0 ; i < n ; i++){
		sum += a[i] ; 
	}
	tb = sum / n ; 
	return tb ; 
}

void liet_ke (float a[] , int n){
	printf ("\nSinh vien co diem duoi diem tb cua ca lop : \n");
	float tb ;
	int dem = 0 ;  
	for (int i = 0 ; i < n ; i++){
		if (a[i] < diem_tb(a , n , tb)){
			printf ("Sinh vien %d : %.2f \n", i + 1, a[i]);
			dem++ ; 
		}
	}
	printf ("Co %d sinh vien  diem duoi diem tb cua ca lop!\n", dem );
}

float tim_diem_max (float a[] , int n , float max){
	max = a[0] ;
	for (int i = 0 ; i < n ; i++){
		if (max < a[i]){
			max = a[i] ; 
		}
	}
	return max ; 
}

int dem_max(float a[] , int n){
	int dem = 0; 
	float max ; 
	tim_diem_max(a , n , max) ; 
	for (int i = 0 ; i < n ; i++){
		if (tim_diem_max(a , n , max) == a[i]){
			dem++ ; 
		}
	}
	return dem ; 
}

void thong_ke (float a[] , int n){
	int demA = 0 , demB = 0 , demC = 0 , demD = 0 , demF = 0 ;  
	printf ("\nDiem chu :    	A	B	C	D	F \n");
	printf ("So sinh vien :	");
	for (int i = 0 ; i < n ; i++){
		if (a[i] > 8.4 && a[i] <= 10){ // A
			demA++ ; 
		}
		else if (a[i] > 6.9 && a[i] <= 8.4){ // B 
			demB++ ; 			
		}
		else if (a[i] > 5.4 && a[i] <= 6.9){ //C
			demC++ ; 
		}
		else if (a[i] > 3.9 && a[i] <= 5.4){  // D
			demD++ ; 
		}
		else if (a[i] >= 0 && a[i] <= 3.9){ // F
			demF++ ; 
		}
	}
	printf ("%d	%d	%d	%d	%d ", demA , demB , demC , demD , demF); 
}





