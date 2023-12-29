#include<stdio.h>
#include<string.h>
#include<stdlib.h>
bool pangram(char s[]){
    int cnt[26] = {0};
    for(int i = 0; i < strlen(s); i++){
        cnt[s[i] - 'a'] = 1; 
    }
    for(int i = 0; i < 26; i++){
        if(cnt[i] == 0){
            return false;
        }
    }
    return true;
}
int main(){
    char s1[1000];
    gets(s1); 
    if(pangram(s1)){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
