#include <stdio.h>
#include <math.h>
int main (){
   int n ;
   int i;
   int lasonguyento=1;
   scanf ("%d",&n);
        if (n>1&&n==(int)n){
            for (i=2;i<=sqrt(n);i++){
                if (n%i==0){
                    lasonguyento=0;
                    break ;
                }
            }


        if (lasonguyento==1){
            printf ("YES");
        }
        else {
            printf ("NO");
        }
        }
        else {
                printf ("NO");
        }




    return 0 ;
}

