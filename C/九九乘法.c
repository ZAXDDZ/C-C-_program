#include <stdio.h>

int main(){
    int number_h, number_t, product; //砞﹚砆计计縩


    for(int number_t = 1; number_t <= 9; number_t++){   //计1~9弄
        for(int number_h = 1; number_h <= 3; number_h++){   //砆计1~3绢︽弄
            product = number_h * number_t;  //縩砆计*计
                printf("%d%s%d=%2d ", number_h, "x ", number_t, product);   //块1*1~3*9猭
        }
        puts("");   //–琿猭玥传︽
    }
    puts("");



    for(int number_t = 1; number_t <= 9; number_t++){
        for(int number_h = 4; number_h <= 6; number_h++){
            product = number_h * number_t;
                printf("%d%s%d=%2d ", number_h, "x ", number_t, product);
        }
        puts("");
    }
    puts("");



    for(int number_t = 1; number_t <= 9; number_t++){
        for(int number_h = 7; number_h <= 9; number_h++){
            product = number_h * number_t;
            printf("%d%s%d=%2d ", number_h, "x ", number_t, product);
        }
        puts("");
    }
    puts("");


    return 0;
}

