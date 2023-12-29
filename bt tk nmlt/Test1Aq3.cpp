#include <stdio.h>
#define MAX_WITHDRAWALS 4 
#define S_FEE 5.0
#define C_FEE 7.5
#define WITHDRAWAL_COST 2.5
int main (){
int CustID , Withdrawals ; 
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
printf ("CustID : %d", CustID);
printf ("\nBankCharge : $ %.2f" , BankCharge);
printf ("\nINPUT CustID : ");
scanf ("%d", &CustID);
}
return 0 ; 
}
