#include <stdio.h>
#include<stdlib.h>
void Doc1so(int so);
void dochaiso(int so);
char  *m[4] ={"Khong","mot","hai","ba" };
int main(int argc, char *argv[])
{
   int so;
   printf("Nhap vao mot so ");
   scanf("%d",&so);
   dochaiso(so);
	
	return 0;
}

void Doc1so(int so)
{
  printf(m[so]);
  //printf("\n"); 	
}
void dochaiso(int so)
{
  int chuc = so/10;
  int donvi =so%10;
  if(chuc == 1)
   {
  	if(donvi == 5)
  	  printf("Muoi lam\n");
    if(donvi == 0)
   	   printf("Muoi \n");
    if(donvi != 5&&donvi!=0)
    {
     printf("muoi");
	 Doc1so(donvi);	
    }
   }
  if(chuc != 1)
   {
    if(donvi == 5)
  	  {
  	   Doc1so(chuc);	
  	   printf(" muoi lam\n");	
  	  }
		
    if(donvi == 0)
  	  {
  	   Doc1so(chuc)	;
  	   printf(" muoi\n");	
  	  }
    }
    if(donvi != 5&&donvi!=0)
    {
     Doc1so(chuc)	;
     printf(" muoi ");
	 Doc1so(donvi);	
    }	
}
int nhapso()
{
	int so = 0;
	printf("Nhap so = ");
	scanf("%d",&so);
 return so;
	
}