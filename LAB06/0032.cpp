#include <stdio.h>
int main (){
	int N,Sa=0,Sb=0,Sc=0,Sd=0; 
	printf ("Hay nhap N: ");
	scanf ("%d",&N);
	for (int i=1;i<=N;i++){
		Sa=Sa+i;
	}
	for (int j=0;j<=N;j++){ 
		 if (j%2==0)
		 	Sb=Sb+j;
	}
	for (int k=1; k<=N;k++){ 
		 if (k%3==0)
		 	Sc=Sc+k;
	}
	for (int l=1;l<=N;l++){
		if (l%2!=0)
			Sd+=l*l;
	}
		 
	
		printf ("a) Tong cac so tu 1 den %d:%d\n",N,Sa);
		printf ("b) Tong cac so chan <=N:%d\n",Sb);
 		printf ("c) Tong cac so tu nhien chia het cho 3 va <=N:%d\n",Sc);
 		printf ("c) Tong binh phuong cac so le tu 1 den N:%d",Sd);
 	
 		
 		

}
//#include <stdio.h>
//int main (){
//	int n,tong=0;
//	scanf ("%d",&n);
//	for (int i=1;i<=n;i++){
//		if (i%2==0)
//		tong+=i;
//			
//		
//	}
//	printf ("%d",tong);
//	
//}
