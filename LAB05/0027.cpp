#include<stdio.h>
int main (){
	int n;
	printf ("Hay nhap 1 so co 5 chu so:");
	scanf ("%d",&n);
	int a=(n/10000)%10;
	int b=(n/1000)%10;
	int c=(n/100)%10;
	int d=(n/10)%10;
	int e=n%10;
		switch (a){
			case 1: printf ("Muoi  ");
					break;
			case 2: printf ("Hai  ");
					break;
			case 3: printf ("Ba ");
					break;
			case 4: printf ("Bon  ");
					break;
			case 5: printf ("Nam ");
					break;
			case 6: printf ("Sau  ");
					break;
			case 7: printf ("Bay  ");
					break;
			case 8: printf ("Tam  ");
					break;
			case 9: printf ("Chin ");
					break;
	}
		switch (b){
			case 1: printf ("mot nghin  ");
					break;
			case 2: printf ("muoi hai nghin  ");
					break;
			case 3: printf ("muoi ba nghin ");
					break;
			case 4: printf ("muoi bon nghin ");
					break;
			case 5: printf ("muoi lam nghin ");
					break;
			case 6: printf ("muoi sau nghin  ");
					break;
			case 7: printf ("muoi bay nghin ");
					break;
			case 8: printf ("muoi tam nghin ");
					break;
			case 9: printf ("muoi chin nghin ");
					break;
	}
			switch (c){
			case 1: printf ("mot tram  ");
					break;
			case 2: printf ("hai tram  ");
					break;
			case 3: printf ("ba tram ");
					break;
			case 4: printf ("bon tram ");
					break;
			case 5: printf ("nam tram ");
					break;
			case 6: printf ("sau tram  ");
					break;
			case 7: printf ("bay tram ");
					break;
			case 8: printf ("tam tram ");
					break;
			case 9: printf ("chin tram ");
					break;
	}
		switch (d){
			case 1: printf ("muoi  ");
					break;
			case 2: printf ("hai muoi ");
					break;
			case 3: printf ("ba muoi ");
					break;
			case 4: printf ("bon muoi ");
					break;
			case 5: printf ("nam muoi ");
					break;
			case 6: printf ("sau muoi  ");
					break;
			case 7: printf ("bay muoi ");
					break;
			case 8: printf ("tam muoi ");
					break;
			case 9: printf ("chin muoi ");
					break;
	}
		switch (e){
			case 1: printf ("mot   ");
					break;
			case 2: printf ("hai ");
					break;
			case 3: printf ("ba ");
					break;
			case 4: printf ("bon ");
					break;
			case 5: printf ("lam ");
					break;
			case 6: printf ("sau ");
					break;
			case 7: printf ("bay ");
					break;
			case 8: printf ("tam ");
					break;
			case 9: printf ("chin ");
					break;

	}
}
