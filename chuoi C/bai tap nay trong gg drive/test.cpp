#include <stdio.h>
struct ps
{
 int tu;
 int mau;
};
int ucln(int a,int b)
{
 if(a==b)
 return a;
 else
 {
 if(a>b)
 return ucln(a-b,b);
 else
 return ucln(a,b-a); 
 }
}
ps tongps(ps ps1,ps ps2)
{
 ps sum;
 sum.tu = ps1.tu*ps2.mau+ps1.mau*ps2.tu;
 sum.mau = ps1.mau*ps2.mau;
 int uc;
 uc =ucln(sum.tu,sum.mau);
 sum.tu = sum.tu/uc;
 sum.mau = sum.mau/uc;
 return sum;
}
ps hieups(ps ps1,ps ps2)
{
 ps tru;
 tru.tu =(ps1.tu*ps2.mau)-(ps1.mau*ps2.tu);
 tru.mau = ps1.mau*ps2.mau;
 int uc;
 uc =ucln(tru.tu,tru.mau);
 tru.tu = tru.tu/uc;
 tru.mau = tru.mau/uc;
 return tru;
}
ps tichps(ps ps1,ps ps2)
{
 ps sum;
 sum.tu = ps1.tu*ps2.tu;
 sum.mau = ps1.mau*ps2.mau;
 int uc;
 uc =ucln(sum.tu,sum.mau);
 sum.tu = sum.tu/uc;
 sum.mau = sum.mau/uc;
 return sum;
}
ps thuongps(ps ps1,ps ps2)
{
 ps sum;
 sum.tu = ps1.tu*ps2.mau;
 sum.mau = ps1.mau*ps2.tu;
 int uc;
 uc =ucln(sum.tu,sum.mau);
 sum.tu = sum.tu/uc;
 sum.mau = sum.mau/uc;
 return sum;
}
int main()
{
 ps ps1,ps2,tong,hieu,tich,thuong;
 printf("nhap 2 phan so:\n");
 printf("nhap phan so thu nhat: ");
 scanf("%d%d",&ps1.tu,&ps1.mau);
 printf("nhap phan so thu hai: ");
 scanf("%d%d",&ps2.tu,&ps2.mau);
 tong = tongps(ps1,ps2);
 printf("%d/%d + %d/%d = %d/%d\n",ps1.tu,ps1.mau,ps2.tu,ps2.mau,tong.tu,tong.mau);
 hieu = hieups(ps1,ps2);
 printf("%d/%d - %d/%d = %d/%d\n",ps1.tu,ps1.mau,ps2.tu,ps2.mau,hieu.tu,hieu.mau); 
 tich = tichps(ps1,ps2);
 printf("%d/%d * %d/%d = %d/%d\n",ps1.tu,ps1.mau,ps2.tu,ps2.mau,tich.tu,tich.mau);
 thuong= thuongps(ps1,ps2);
 printf("%d/%d / %d/%d = %d/%d\n",ps1.tu,ps1.mau,ps2.tu,ps2.mau,thuong.tu,thuong.mau);
 return 0;
} 
