#include<stdio.h>
#include<math.h>

int main (){
	int Xa, Ya, Xb, Yb;
	printf ("Toa do A (Xa ; Ya) : ");
	scanf ("%d %d", &Xa, &Ya);
	printf ("Toa do B (Xb ; Yb) : ");
	scanf ("%d %d", &Xb, &Yb);
	double tinh_do_dai ;
	tinh_do_dai = sqrt (((Xa - Xb) * (Xa - Xb)) + ((Ya - Yb) * (Ya - Yb)));	
	printf ("Do dai AB : %lf", tinh_do_dai);
	
	
}
