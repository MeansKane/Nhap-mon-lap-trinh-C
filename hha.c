#include<stdio.h>
#include<string.h>
struct MEDICINE{
    char ID[8], name[15];
    long int price;
    int quantity;
    char date[11];
    long int totalCost;
};
typedef struct MEDICINE med;
void enterMed(med *a){
    fflush(stdin);
    printf("- Nhap ma thuoc: "); gets(a->ID);
    printf("- Nhap ten thuoc: "); gets(a->name);
    printf("- Nhap don gia: "); scanf("%ld", &a->price);
    printf("- Nhap so luong: "); scanf("%d", a->quantity);
    fflush(stdin);
    printf(" Nhap ngay het han: "); gets(a->date);
}
long int totalCost(med a){
    long int res = 0;
    if(strstr(a.date, "1/2023")){
        res = (a.price * a.quantity) * 0.9;
    }
    else{
        res = (a.price * a.quantity);
    }
    return res;
}
void printMed(med a, int n){
    a.totalCost = totalCost(a);
    printf("%s\t %s\t %ld\t %d\t %s\t %ld\n", a.ID, a.name, a.price, a.quantity, a.date, a.totalCost);
}
void enterMedArr(med a[], int n){
    for(int i = 0; i < n; i++){
        printf("STT %d\n", i + 1);
        enterMed(&a[i]);
    }
}
void printMedArr(med a[], int n){
    for(int i = 0; i < n; i++){
        printMed(a[i], i + 1);
    }
}
int findDate(med a[], int n, char date[]){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].date, date) == 0){
            return i;
        }
    }
    return -1;
}
int main(){
    med a[100];
    int n;
    do{
        printf("Nhap so luong loai thuoc (<= 100): ");
        scanf("%d", &n);
    }while(n > 100);

    enterMedArr(a, n);
    printMedArr(a, n);
    return 0;
}
