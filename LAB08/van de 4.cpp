#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool kiem_tra(float a , float b , float c);
float tinh_dien_tich(float a , float b , float c);
void in_ra_S(float s);

int main (){
	float a, b , c , s ; 
	printf ("nhap 3 canh : ");
	scanf("%f %f %f", &a, &b, &c);
	if (kiem_tra(a , b ,c)){
		s = tinh_dien_tich(a , b , c);
		in_ra_S(s);
	} 
	if ( a == b == c == 0){
		s = 0;
		in_ra_S(s);
	}
	else {
		printf ("sai roi ban oi ");
	}
	return 0;
}

bool kiem_tra(float a , float b , float c){
	if (a + b > c &&  a + c > b && b + c > a){
		return true;
	}
	else {
		return false;
	}
}
float tinh_dien_tich(float a , float b , float c){
	float p,s ;
	p = (a + b + c) / 2 ; 
	s = sqrt (p * (p - a) * (p - b) * (p - c));
	return s;
}
void in_ra_S(float s){
	printf ("dien tich tam giac = %.2f", s);
}



//#include <stdio.h>
//#include <math.h>
//float dientichtamgiac(float a, float b, float c)
//{
//	float p, s;
//	p=(a + b + c) / 2;
//	s=sqrt(p * ( p - a ) * ( p - b ) * ( p - c ));
//	return s;
//}
//bool kiemTra(float a, float b, float c)
//{
//	if(a+b>c && a+c>b && b+c>a)
//		return true; // lap thanh tam giac
//	else
//		return false; //khong lap thanh tam giac
//}
////---------------------------------------------------------
//int main()
//{
//	float a,b,c, s;
//	printf("Nhap do dai a,b,c:");
//	scanf("%f%f%f", &a,&b,&c);
//	if(kiemTra(a,b,c))
//	{
//		s=dientichtamgiac(a,b,c);
//		printf("Dien tich=%f", s);
//	}
//	else
//		printf("Khong lap thanh tam giac");
//	return 0;
//}
