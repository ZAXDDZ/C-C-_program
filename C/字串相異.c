#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string1[100];
    char string2[100];
    int temp;

    scanf("%s", string1);
    scanf("%s", string2);

    int len_s1 = strlen(string1);
    int len_s2 = strlen(string2);

    /*for(int i = 0; i < len_s2; i++){
        if(i + len_s1 >= len_s2){
            break;
        }
    }*/

    for(int j = 0; j <= len_s2 - 1; j++){   //持續讀到string2的最後一字
        if(string1[j] != string2[j]){   //如果string1和string2的相同次序為不同字元
                temp = j;   //將第幾位置紀錄在temp
            break;
        }
    }

    for(int k = temp; k <= len_s2 - 1; k++){    //從temp讀到string2的最後一字
        printf("%c", string2[k]);   //輸出兩字串不同處
    }
    printf("\n");
    return 0;
}
