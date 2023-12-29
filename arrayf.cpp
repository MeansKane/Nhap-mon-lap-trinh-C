#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20
void InputArray(int Array[], int ArraySize);
void OutputArray(int Array[], int ArraySize);
int MaxArray(int Array[], int ArraySize);

int main(void) {
  int Array1[SIZE];
  srand(time(NULL));
  int Scores[SIZE] = {0};
//Input Array
InputArray(Array1, SIZE);
OutputArray(Array1, SIZE);
int Max = MaxArray(Array1, SIZE);
  
  //Max Array
  



  return 0;
}


void InputArray(int Array[], int ArraySize){
printf("Please type the Array\n");  
  for (int Count = 0; Count < ArraySize; Count ++) 
  {
    //printf("Scores[%i]: ",Count);   
    //scanf("%i",&Scores[Count]); 
    Array[Count] = -10 + rand() % 61 ;//-10..10
  }
}
void OutputArray(int Array[], int ArraySize){
//Output Array
  for(int Index = 0; Index < ArraySize; Index ++)
    printf("%4d", Array[Index]);
  printf("\n");
}

int MaxArray(int Array[], int ArraySize){
int MaxScore = Array [0];
  
for(int Index = 1; Index <ArraySize ; Index++)
  {
    if(MaxScore < Array[Index])
    {
      MaxScore = Array[Index];
    }
      
  }
printf("Maxscore = %d \n", MaxScore);
return MaxScore;
}

