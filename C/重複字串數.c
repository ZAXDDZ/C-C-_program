#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    char stringA[SIZE];
    char stringB[SIZE];
    int counter = 0;

    puts("輸入字串A");
    gets(stringA);
    puts("輸入要找尋次數的字串B");
    gets(stringB);
    puts("");

    char *stringX = strstr(stringA, stringB);   //儲存首次出現stringA和stringB相同處

    while(stringX != NULL){ //只要stringX沒讀到NULL則持續做
        counter++;  //stringB重複次數+1
        stringX = strstr(stringX + 1, stringB); //再次判斷
        if(stringX == NULL){    //當讀到NULL
            break;  //跳出迴圈
        }
    }

    printf("%s%s\n%d\n", stringB, "的次數為", counter); //輸出stringB出現次數
    return 0;
}
