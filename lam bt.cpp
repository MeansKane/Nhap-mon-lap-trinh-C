#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Information{
    char code[8];
    char name[20];
    double salary;
    double allowance;
};
typedef struct Information in4;
in4 enter(in4 a){
    printf("\n+ Enter code: "); 
    scanf("%s", a.code);
    getchar();
    printf("+ Enter name: "); 
    gets(a.name);
    printf("+ Enter salary: "); 
    scanf("%lf", &a.salary);
    printf("+ Enter allowance: "); 
    scanf("%lf", &a.allowance);
    return a;
}
void out(in4 a){
    printf("%s", a.code);
}
int main(){
    in4 a[100];
    int n; 
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    printf("Enter information of each employee: ");
    for(int i = 0; i < n; i++){
        enter(a[i]);
    }
    for(int i = 0; i < n; i++){
        out(a[i]);
    }
    return 0;
}
