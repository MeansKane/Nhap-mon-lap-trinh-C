#include <stdio.h>
#include <math.h>
int main (){
    int n ;
    scanf ("%d",&n);
    int i;
    int lasonguyento=1;
    if ( n>1&&n==(int)n){
        for (i=2;i<=sqrt(n);i++){
            if(n%i){
                lasonguyento=0;
                break;
            }
        }
        if (lasonguyento==1){
            printf ("la so nguyen to ");
        }else {
                printf ("khong la so nguyen to");
        }

    }else {
            printf ("khong dieu kien de xet so nguyen ");o
    }





    return 0;
}
