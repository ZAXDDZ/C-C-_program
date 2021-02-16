#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[11];
    for(int block = 0; block <= 9; block++){    //輸入10個數
        scanf("%d", &a[block]);
        }

    for(int counter = 1; counter <= 10; counter++){         //重複做10次交換排列
        for(int block_number = 0; block_number <=8; block_number++){         //從第一格判斷到第九格
            if(a[block_number] >= a[block_number+1]){
                a[10] = a[block_number];
                a[block_number] = a[block_number+1];
                a[block_number+1] = a[10];
            }
        }
    }

    for(int block_number = 0; block_number <= 8; block_number++)
        printf("%d ", a[block_number]);
    printf("%d\n", a[9]);
    return 0;
}
