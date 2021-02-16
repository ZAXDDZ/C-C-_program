#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    char password[] = "123456"; //設定正確密碼
    char enterword[SIZE];   //設定儲存輸入者輸入的密碼

    printf("enter password\n");
    gets(enterword);    //輸入密碼

    if(strcmp(password, enterword) == 0){   //如果與正確密碼完全一樣
        puts("YES!\n"); //輸出YES
    }
    else{
        puts("NO!\n");  //否則輸出NO
    }
    return 0;
}
