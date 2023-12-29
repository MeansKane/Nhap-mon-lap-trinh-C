#include <stdio.h>
#include <math.h>
int main (){
	 int n,i,S4 = 0; 
	 float S3 = 1;
	 printf ("Nhap so nguyen : ");
	 scanf ("%d", &n);
	do {
		if (n < 0){
			printf ("Nhap lai : ");
			scanf ("%d", &n);
		}
	} while (n < 0);
	for (i = 1 ; i <= n ; i++){
		S3 = S3 * (2 * i - 1) / (2 * i);
		S4 = S4 + (i * (i + 1) * (i + 2));
	}
	printf ("Tong S3: %f\n", S3);
	printf ("Tong S4: %d", S4);
	return 0;
}		
	
	
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int N, i;
//	float S1 = 0, S2 = 0, S3 = 1, S4 = 0;
//	printf("Nhap N: ");
//	scanf("%d",&N); 
//	do 
//	{
//		if (N < 0)
//			printf ("Nhap lai : ");
//	}
//	 while(N < 0);
//	for(i = 1; i <= N; i++)
//	{
//		S1 = S1 + i;
//		S2 = S2 + i * i;
//		S3 = S3 * (2 * i - 1) / (2 * i);
//		S4 = S4 + (i * ((i + 1) * ( i + 2)));
//	}	
//		S1 = S1 / N;
//		S2 = sqrt(S2);
//		printf("S1 = %f\tS2 = %f\tS3 = %f\tS4 = %f", S1, S2, S3, S4);
//	return 0;
//}
