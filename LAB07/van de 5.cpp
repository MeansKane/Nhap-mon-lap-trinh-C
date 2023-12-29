#include <stdio.h>
int main (){
	int N = 1;// so thang 
	float X, Y , M;
	printf ("Lai suat : ");
	scanf ("%f", &X);
	printf ("So tien gui : ");
	scanf ("%f", &Y);	
	printf ("So tien can : ");
	scanf ("%f", &M);
	while (N <= 12)
	{
		if (Y < M)
		{
			Y  = ((Y * X)) + Y;// gui them 1 thang 
			  printf ("So tien sau %d thang : %f\n",N, Y);
		
		}	
		N++;// thang + 1
	}	


	
   	
	
	
	
}
