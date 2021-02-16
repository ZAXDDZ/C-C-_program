#include <stdio.h>
#include <string.h>
#define SIZE 200

int main(){
    char string1[SIZE]; //設string1
    char string2[SIZE]; //設string2
    char *stringfix;    //設儲存string1和string2相同的字串
    int counter = 0;    //設紀錄有多少字相同

    gets(string1);  //輸入string1
    gets(string2);  //輸入string2

    stringfix = strstr(string1, string2);   //找尋string1和string2相同的字串

    while(stringfix){
        printf("%s\n", stringfix);  //將相同的string部分依序輸出
        counter++;  //每輸出一次並紀錄一筆
        stringfix = strstr(stringfix + 1,string2);  //找尋下段string2再次出現的字串部分
        if(stringfix == NULL){  //當讀到NULL部分
            puts("");   //換到下一行
        }
    }
    printf("%d\n", counter);    //輸出共有多少段字串被讀到
    return 0;
}
