#include <stdio.h>// hay dem so luong nguyen am, phu am, ky tu khac.
int main (){
	char C;
	int nguyenam;
	int phuam;
	int khac;
	printf ("Hay nhap cac ky tu :"); 
	do {
		scanf ("%c", &C);
		if (C >= 'A' && C <= 'Z'){
			switch (C){
				case 'A': case 'E': case 'I': case 'O': case 'U':
					nguyenam++;
					break;
				default : phuam++; 
			}
		}
		else if (C != 10){
			khac++;
		}
	} while (C != '\n');
	printf ("so luong nguyen am: %d\n ", nguyenam);
	printf ("so luong phu am: %d\n ", phuam);
	printf ("so luong ky tu khac : %d ", khac);
}
