#include<stdio.h>
#include<stdlib.h>
struct sv{
    int code;
    char name[30];
    char addr[30];
    char birth[20];
};
void print(sv a){
    printf("%d\t%s\t%s\t%s\n", a.code, a.name, a.addr, a.birth);
}
void print1(sv a){
    printf("%s\ncode: [%d]\taddress: [%s]\tbirthday: [%s]\n", a.name,a.code, a.addr, a.birth);
}
void readFile1(char *fileName, sv *a){
    FILE *f = fopen(fileName, "r");
    while(fscanf(f, "%d:%[^,],%[^:]:%s%*c", &a->code, &a->name, &a->addr, &a->birth) != EOF){
        print(*a);
    }
    fclose(f);
}
void readFile2(char *fileName, sv a[], int &n){
    FILE *f = fopen(fileName, "r");
    int i = 0; 
    while(fscanf(f, "%d:%[^,],%[^:]:%s%*c", &a[i].code, &a[i].name, &a[i].addr, &a[i].birth) != EOF){
        print1(a[i]);
        i++;
    }
    fclose(f);
}
int main(){
    sv a[100];
    int n;
    char fileName[] = "bai4.txt";
    printf("Noi dung trong tap tin bai4.txt: \n");
    readFile1(fileName, a);
    printf("\nKet Qua: \n");
    readFile2(fileName, a, n);
    return 0;
}
