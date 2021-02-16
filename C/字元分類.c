#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    char string[SIZE];  //設定儲存一段字串的string
    gets(string);   //輸入一段string

    int counter_char = 0, counter_digit = 0, counter_space = 0, counter_others = 0;
    //設定紀錄字元數、數字數、空格數、其他數的紀錄值
    int number = strlen(string);    //設定可讀string長度的值

    for(int i = 0; i < number; i++){    //重複判讀string
        if(string[i] >= 'A' && string[i] <= 'Z'){   //當讀到A~Z時
            counter_char++; //將讀到次數記下
        }

        else if(string[i] >= 'a' && string[i] <= 'z'){  //當讀到a~z時
            counter_char++; //將讀到次數記下
        }

        else if(string[i] >= '1' && string[i] <= '9'){  //當讀到1~9時
            counter_digit++;//將讀到次數記下
        }

        else if(string[i] == ' '){  //當讀到空格時
            counter_space++;//將讀到次數記下
        }

        else{
            counter_others = number - counter_char - counter_digit - counter_space;
        }
    }

    printf("%s%d\n%s%d\n%s%d\n%s%d\n", "alpha = ", counter_char,
                                       "digit = ", counter_digit,
                                       "space = ", counter_space,
                                       "others = ", counter_others);    //輸出各類型的數量

    return 0;
}
