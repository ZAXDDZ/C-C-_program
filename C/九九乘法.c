#include <stdio.h>

int main(){
    int number_h, number_t, product; //�]�w�Q���ơB���ơB�n


    for(int number_t = 1; number_t <= 9; number_t++){   //����1~9���CŪ�U
        for(int number_h = 1; number_h <= 3; number_h++){   //�Q����1~3���Ū�U
            product = number_h * number_t;  //�n���Q����*����
                printf("%d%s%d=%2d ", number_h, "x ", number_t, product);   //��X1*1~3*9�����k��
        }
        puts("");   //�C�C�X�@�q���k�h����
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

