#include <stdio.h>
int main () {
    int thang,nam  ;
    printf ("Nhap thang:");
    scanf ("%d",&thang);
    printf ("Nhap nam:");
    scanf ("%d",&nam);
        if (thang>=1&&thang<=12){
            switch (thang){
                case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                   printf ("Thang %d cua nam %d co 31 ngay",thang,nam);
                    break;
                    break;
                case 4:case 6:case 9:case 11:
                    printf ("Thang %d cua nam %d co 30 ngay",thang,nam);
                    break;
                case 2:
                    if (nam%4==0){
                        printf ("Thang %d cua nam %d co 29 ngay",thang,nam);
                    }
                    else {
                        printf ("Thang %d cua nam %d co 28 ngay",thang,nam);
                    }

                    break;
            }
        }
        else {
            printf ("Thang khong hop le");
        }





}
