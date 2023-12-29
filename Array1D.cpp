#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
void InputArray(int Array[], int NumArr);
void OutPutArray(int Array[], int numArr);
int GetSumArray(int Array[], int NumArr);


int main(void) {
srand(time(NULL));
int Coins[SIZE] = {0};
InputArray(Coins, SIZE);
OutPutArray(Coins, SIZE);
GetSumArray(Coins, SIZE);



return 0;
}
//Ham nhap mang 
void InputArray(int Array[], int NumArr)
{
for(int i = 0; i < NumArr ; i++)
  {
    Array[i] =  rand() %31; //-100..100
  }
}
//Ham xuat mang
void OutPutArray(int Array[], int numArr)
{
  for(int i = 0; i < numArr ; i++)
  {
    printf("%5i", Array[i]);
  }

}

int GetSumArray(int Array[], int NumArr)
{
  int sum = 0;
for(int i = 0; i < NumArr ; i++)
{
 sum  += Array[i];
}
printf("\nSum = %d", sum);
return sum;
}
