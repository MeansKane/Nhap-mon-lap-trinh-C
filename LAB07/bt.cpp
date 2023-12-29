#include <stdio.h>
int main (){
	char C = 0;
	int chuso = 0; 
	int chucai = 0;
	int kytukhac = 0; 
	printf ("Hay nhap cac ky tu: ");
	while (C !=  ) {
		scanf ("%d", &C);
		if (C >= 0 && C <= 9){
			chuso++;
		}	
		else if ((C >= 'a' && C <= 'z') || (C >= 'A' && C <= 'Z')){
			chucai++;	
		}
		else {
				kytukhac++;
		}	
		
	} 
	printf ("Cac ky tu chu so: %d\n", chuso);
	printf ("Cac ky tu chu cai: %d\n", chucai);
	printf ("Cac ky tu khac: %d", kytukhac); 
}	
