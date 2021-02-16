#include <stdio.h>
#include <math.h>

int main(){
    float km;   //設定公里數
    int sec;    //設定暫停時間
    int total = 70; //設定原價70
    printf("%s\n\n%s\n%s", "起始價格70元，可行1.25km", "輸入走多少公里與停幾秒", "總公里(0.2km計費一次)： ");
    scanf("%f", &km);   //輸入共行多少公里
    printf("%s", "總秒(80s計費一次)： ");
    scanf("%d", &sec);  //輸入共停多少秒

    printf("\n%s", "總車資為： ");

    if(km <= 1.25 && sec <= 80){    //如果在1.25km以下且80s以下則做
        printf("%d", total);    //車錢為原價
    }
    else{   //如果超過標準則依另一套規則加價
        km = (km - 1.25) / 0.2; //每200m則紀錄一次加錢次數(不管有無行到200m都算一次)
        sec = sec / 80;         //每80s則紀錄一次加錢次數
        total = total + ceil(km) * 5 + sec * 5; //算出最後金額
        printf("%d\n", total);    //輸出最終金額
    }
}
