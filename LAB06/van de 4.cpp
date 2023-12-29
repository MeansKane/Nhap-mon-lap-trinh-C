#include <stdio.h>
int main (){
	int n=500000;
//	printf ("Hay nhap vao so tien muon rut:");
//	scanf ("%d",&n);
		for (int i=1; i<=10; i++ ) {
			for (int j=1; j<=5;j++){
				for (int k=1;k<=2;k++){
					for (int l=0;l<=1;l++){
						
					if (i*50000+j*100000+k*200000+l*500000==500000){
				printf ("%d to 50000, %d to 100000, %d to 200000, %d to 500000\n ",i,j,k,l);
			}
		}
	}
}
}
}
