#include <stdio.h>
#include <stdlib.h>

void printRec(int height, int weight, char symbol){
    for(int i = 0; i < height; i++){    //重複由上到下讀長值次數
        for(int j = 0; j < weight; j++){    //重複由左至右讀寬值次數
            printf("%c", symbol);   //輸出填入字元
        }
            printf("\n");
    }
}

int main(void){
    int height, weight; //設定長寬
    char symbol;    //設定填補字元
    scanf("%d", &height);   //輸入長為多少
    scanf("%d\n", &weight); //輸入寬為多少
    scanf("%c", &symbol);   //輸入填入字元為何
    puts("");
    printRec(height, weight, symbol);   //執行function printRec
    return 0;
}
