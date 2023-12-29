#include <stdio.h>

void inRowsColumns (int *m , int *n);
void inArray2 (int a[][100] , int m , int n);
void outArray2 (int a[][100] , int m , int n);
float sum (int a[][100] , int m , int n);
int max (int a[][100] , int m , int n);

int main ()
{
	int a[100][100] , m , n;
	inRowsColumns (&m , &n);
	inArray2 (a , m , n);
	printf ("Day la mang vua nhap : \n");
	outArray2 (a , m , n);	
	sum (a , m , n);
	max (a , m , n);
	return 0; 
}

void inRowsColumns (int *m , int *n)
{
	do {
		printf ("Input rows : ");
		scanf ("%d", m);
		printf ("Input columns : ");
		scanf ("%d", n);
	}	while (*m < 0 && *n < 0 || *m > 100 && *n > 100);
}

void inArray2 (int a[][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("\nInput array[%d][%d] : " , i , j);
			scanf ("%d", &a[i][j]);
		}
	}
}

void outArray2 (int a[][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("%d\t", a[i][j]);
		}
		printf ("\n");
	}	
}

float sum (int a[][100] , int m , int n)
{
	float sum = 0 ; 
	for (int i = 0 ; i < m ; i += 2)
	{
		for (int j = 0 ; j < n ; j++)
		{
			sum += a[i][j];	
		}
	}	
	printf ("\nTong cac phan tu tren hang chan : %.2f", sum);
}

int max (int a[][100] , int m , int n)
{
	int max = a[0][0];
	for (int j = 1 ; j < n ; j++)
	{
		if (max < a[j][0])
		{
			max = a[j][0];
		}
	}	
	printf ("\nGia tri lon nhat cot 1 : %d ", max);
	return max ;
} 


//#include<stdio.h>
//#include<conio.h>
//main()
//{
//    int a[50][50];
//    int i,j,m,n;
//    printf("nhap so hang n="); scanf("%d",&n);
//    printf("nhap so cot m="); scanf("%d",&m);
//    printf("nhap vao ma tran:\n");
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
////hien thi ma tran vua nhap duoi dang bang
//    printf("ma tran vua nhap la:\n");
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//// tinh tong pt tren hang chan cua mang
//    float s=0;
//    for(i=0;i<n;i=i+2)
//    {
//        for(j=0;j<m;j++)
//        {
//            s=s+a[i][j];
//        }
//    }
//    printf("\nTong pt tren hang chan cua mang la: %5f",s);
//// tim max tren cot 1 cua mang
//    int max;
//    max=a[0][0];
//    for(i=1;i<n;i++)
//    {
//        if(a[i][0]>max)
//        {
//            max=a[i][0];
//        }
//    }
//    printf("\nGia tri max tren cot 1 cua mang la %5d",max);
//    getch();
//}
