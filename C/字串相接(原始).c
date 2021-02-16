#include <stdio.h>
#define SIZE 80

void mystery1(char *s1, const char *s2);

int main(){
    char string1[SIZE]; //設定string1
    char string2[SIZE]; //設定string2

    puts("Enter");
    scanf("%79s%79s", string1, string2);  //輸入string1, string2兩字串
    mystery1(string1, string2);           //將string1, string2丟入function mystery1執行
    printf("%s", string1);  //輸出執行完的string1
}

void mystery1(char *s1, const char *s2){    //設定string1和string2的指標
    while(*s1 != '\0'){ //當持續讀s1直到讀完前
        ++s1;
    }
    for(; *s1 = *s2; ++s1, ++s2){
        ;
    }
}
