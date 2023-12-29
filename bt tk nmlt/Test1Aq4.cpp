#include <stdio.h>
#define MAX_WITHDRAWALS 4 
#define S_FEE 5.0
#define C_FEE 7.5
#define WITHDRAWAL_COST 2.5
int main (){
int CustID , Withdrawals , NumCheques , CustID1 = 0 ; 
char AccountType ;
float BankCharge ; 
printf ("INPUT CustID : ");
scanf ("%d", &CustID);
while ((CustID >= 1000 && CustID <= 9999) || CustID != -999){
BankCharge = 0 ; 
printf ("INPUT AccountType : ");
fflush(stdin);
scanf ("%c", &AccountType);
printf ("INPUT Withdrawals : ");
fflush(stdin);
scanf ("%d", &Withdrawals);
printf ("INPUT NumCheques : ");
fflush(stdin);
scanf ("%d", &NumCheques);
if (Withdrawals > MAX_WITHDRAWALS){
BankCharge = (Withdrawals - MAX_WITHDRAWALS) * 
WITHDRAWAL_COST ;
}
switch (AccountType){
case 'S' : 
BankCharge = BankCharge + S_FEE ; 
break ; 
case 'C' : 
BankCharge = BankCharge + C_FEE ; 
break ;
default :
printf ("Error in AccountType\n");
BankCharge = 0 ; 
break ;
}
if (NumCheques > 2){
BankCharge += 5.00 ;
}
printf ("BankCharge : $ %.2f" , BankCharge);
printf ("\nINPUT CustID : ");
CustID1++;
scanf ("%d", &CustID);
}
printf ("TotalCust = %d", CustID1);
return 0 ;
}

