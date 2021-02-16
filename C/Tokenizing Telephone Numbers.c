#include <stdio.h>
#include <string.h>
#define SIZE 20

int main(){
    char string[SIZE];  //設定整串電話儲存的自萬
    char *stringx;  //設定去除數字外的輔助字元

    fgets(string, SIZE, stdin); //輸入電話

    stringx = strtok(string, "()-");    //當讀到這些字元則跳過

    while(stringx != NULL){ //當判斷stringx不是NULL時則做
            printf("%s", stringx);  //依序輸出stringx
            stringx = strtok(NULL, "()-");  //再次判斷有無這些字元
    }

    puts("");

    return 0;
}
