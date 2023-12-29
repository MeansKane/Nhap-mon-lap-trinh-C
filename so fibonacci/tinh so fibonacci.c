#include <stdio.h>
int main (){
    int n ;
    scanf ("%d",&n);
    int f,f1,f2;
    int i ;
    f=f1=f2=1;
    for (i=3;i<=n;i++){
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    printf("%d",f);

}
