#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void tachHoTen(char s[], char s1[]){
    int i = strlen(s) - 1;
    int pos = 0;
    while(i >= 0){
        if(s[i] == ' ' && s[i + 1] != ' '){
            for(int j = i + 1; j < strlen(s); j++){
                s1[pos] = s[j];
                pos++;
            }
            s[i] = '\0';
            break;
        }
        i--;
    }
    printf("%s\n%s", s, s1);
}
int main(){ 
    char s[100], s1[100];
    gets(s);
    tachHoTen(s, s1);
    return 0;
}
