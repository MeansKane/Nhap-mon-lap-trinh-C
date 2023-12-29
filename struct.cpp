#include <stdio.h>
/*
    struct Struct_name {
        data 
    };
*/
struct SinhVien 
{
    char mssv[20];
    char ten[50];
    double gpa;
    char lop[20];
};
typedef struct SinhVien SV;// tránh ghi l?i struct nhi?u l?n 

int main ()
{
    SV a; //struct SinhVien a;
    scanf ("%s", a.mssv);
    getchar();
    gets(a.ten);
    scanf ("%.2lf%s", &a.gpa, a.lop);
    printf ("%s %s %.2lf %s", a.mssv, a.ten, a.gpa, a.lop);
    return 0;
}
