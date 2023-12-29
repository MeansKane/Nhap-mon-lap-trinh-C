#include<stdio.h>
double tinhdanso(int y){
	if(y == 2018)
		return 8E+9;
	return tinhdanso(y - 1) * 1.025;
}
int main(){
	printf("%.0lf", tinhdanso(2028));
	return 0;
}
