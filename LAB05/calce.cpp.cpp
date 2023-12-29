#include<stdio.h>;
int main (){
	int a=13,b=12;
	char pheptoan;
	scanf ("%c",&pheptoan);
	switch (pheptoan){
		case '+':
		printf ("%d",a+b);
		break;
		case '-':
		printf ("%d",a-b);
		break;
		case'*': 
		printf ("%d",a*b);
		break;
		case'/':
			if (b==0){
				printf ("Khong tinh duoc do b=0");
			}
			else {
				printf ("%d",a/b);
			}
			break;
		default :
			printf ("Nhap lai phep toan");
	}
	
	
}
