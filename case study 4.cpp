#include<stdio.h>
#define COST_N 115
#define COST_O 120
#define COST_P 100

int input_ID();
char type_cust();
int input_networker_days();
int input_administrator_days();
int input_programmer_days();
int cal_cost(char type,int N, int O, int P);
void output(int sum,char type, int N, int O, int P);

int main (){
	int ID,networker_days,programmer_days,administrator_days, sum = 0 ;
	char type; 
	ID = input_ID();
	type = type_cust();
	networker_days = input_networker_days();
	administrator_days = input_administrator_days();
	programmer_days = input_programmer_days();
	sum = cal_cost(type, networker_days, programmer_days, administrator_days);
	output(ID, type,networker_days, administrator_days, programmer_days);
	return 0;
}

int input_ID(){
	int a ;
	printf ("ID number : ");
	scanf ("%d", &a);
	return a;
}
char type_cust(){
	char t;
	printf ("The type of customer (R regular or C casual) : ");
	fflush(stdin);
	scanf ("%c", &t);
	return t;
}
int input_networker_days(){
	int b;
	printf ("The number of required networker days : ");
	scanf ("%d", &b);
	return b;
}

int input_administrator_days(){
	int c;
	printf ("The number of required office administrator days : ");
	scanf ("%d", &c);
	return c;
}

int input_programmer_days(){
	int d;
	printf ("The number of required  programmer days : ");
	scanf ("%d", &d);
	return d;
}

int cal_cost(char type, int N, int O, int P){
	int sum = 0;
	int sum1 = 0;
	sum = N * COST_N + O * COST_O + P * COST_P;
	if (type == 'R'){
		sum1 = sum * 0.95;
	}
	else {
		sum1 = sum;
	}
	return sum1; 
}

void output(int ID,char type,int N, int O, int P){
	printf ("Cust ID:  %d\n", ID);
	printf ("The type of customer : %c\n", type);
	printf ("Profession       Days       Cost\n");
	printf ("\n============================================\n");
	printf ("Networker         %d          %d\n ", N,N * COST_N);
	printf ("Administrator     %d          %d\n ", O,O * COST_O);
	printf ("Programmer        %d          %d\n ", P,P * COST_P);
	printf ("\n============================================\n");
	printf ("Total cost                     %d ", cal_cost(type,N,O,P));
}
