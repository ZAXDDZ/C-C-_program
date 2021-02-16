#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    printf("%s", "輸入空間NxN\n");
    scanf("%d", &number);   //輸入棋盤大小

    const char plate[number][number + 1];   //建立一個棋盤(最後一格存換行指令)
    printf("輸入x與Q的排列\n");
    for(int row = 0; row < number; row++){
        for(int colum = 0; colum <= number; colum++){
            scanf("%c", &plate[row][colum]);    //輸入Queen的擺放位置
        }
    }
    puts("");


    int counter = 0, temp = 0;  //counter紀錄Q的數量，temp當判斷

    for(int i = 0; i < number; i++){    //從row第1行開始
        for(int j = 0; j <= number; j++){   //從colum第1行開始

            counter = 0;    //counter歸零
            for(int k = 0; k <= number; k++){   //用k的變化作為檢查
                if(plate[i][k] == 'Q'){    //檢查橫排
                    counter++;  //當有Q出現則記錄
                }
            }
                if(counter >= 2){   //當檢查出2個以上則做
                    temp = -1;  //temp變為-1表錯誤
                    goto stop;  //跳出迴圈執行stop的內容
                }

            counter = 0;    //counter歸零
            for(int k = 0; k < number; k++){    //用k的變化作為檢查
                if(plate[k][j] == 'Q'){
                    counter++;  //當有Q出現則記錄
                }
            }
                if(counter >= 2){   //當檢查出2個以上則做
                    temp = -1;  //temp變為-1表錯誤
                    goto stop;  //跳出迴圈執行stop的內容
                }

            counter = 0;    //counter歸零
            for(int k = 0; k < number; k++){    //用k的變化作為檢查
                if(plate[i+k][j+k] == 'Q'){
                    counter++;  //當有Q出現則記錄
                }
            }
                if(counter >= 2){   //8866
                    temp = -1;  //temp變為-1表錯誤
                    goto stop;  //跳出迴圈執行stop的內容
                }

            /*counter = 0;    //counter歸零
            for(int k = 0; k < number; k++){    //用k的變化作為檢查
                if(plate[i-k][j-k] == 'Q'){
                    counter++;  //當有Q出現則記錄
                }
            }
                if(counter >= 4){
                    temp = -1;  //temp變為-1表錯誤
                    goto stop;  //跳出迴圈執行stop的內容
                }*/

            counter = 0;    //counter歸零
            for(int k = 0; k < number; k++){    //用k的變化作為檢查
                if(plate[i+k][j-k] == 'Q'){
                    counter++;  //當有Q出現則記錄
                }
            }
                if(counter >= 2){   //86886
                    temp = -1;  //temp變為-1表錯誤
                    goto stop;  //跳出迴圈執行stop的內容
                }

            /*counter = 0;    //counter歸零
            for(int k = 0; k < number; k++){    //用k的變化作為檢查
                if(plate[i-k][j+k] == 'Q'){
                    counter++;  //當有Q出現則記錄
                }
            }
                if(counter >= 4){
                    temp = -1;  //temp變為-1表錯誤
                    goto stop;  //跳出迴圈執行stop的內容
                }*/
        }
    }

    stop:   //跳出迴圈後再依照temp做以下
        if(temp == -1){  //當temp = -1則做
            printf("False\n");  //輸出False
        }
        else{
            printf("True\n");   //輸出True
        }

    for(int i = 0; i < number; i++){
        for(int j = 0; j <= number; j++){
            printf("%c", plate[i][j]);
        }
    }


    return 0;
}
