#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    printf("%s", "��J�Ŷ�NxN\n");
    scanf("%d", &number);   //��J�ѽL�j�p

    const char plate[number][number + 1];   //�إߤ@�ӴѽL(�̫�@��s������O)
    printf("��Jx�PQ���ƦC\n");
    for(int row = 0; row < number; row++){
        for(int colum = 0; colum <= number; colum++){
            scanf("%c", &plate[row][colum]);    //��JQueen���\���m
        }
    }
    puts("");


    int counter = 0, temp = 0;  //counter����Q���ƶq�Atemp��P�_

    for(int i = 0; i < number; i++){    //�qrow��1��}�l
        for(int j = 0; j <= number; j++){   //�qcolum��1��}�l

            counter = 0;    //counter�k�s
            for(int k = 0; k <= number; k++){   //��k���ܤƧ@���ˬd
                if(plate[i][k] == 'Q'){    //�ˬd���
                    counter++;  //��Q�X�{�h�O��
                }
            }
                if(counter >= 2){   //���ˬd�X2�ӥH�W�h��
                    temp = -1;  //temp�ܬ�-1����~
                    goto stop;  //���X�j�����stop�����e
                }

            counter = 0;    //counter�k�s
            for(int k = 0; k < number; k++){    //��k���ܤƧ@���ˬd
                if(plate[k][j] == 'Q'){
                    counter++;  //��Q�X�{�h�O��
                }
            }
                if(counter >= 2){   //���ˬd�X2�ӥH�W�h��
                    temp = -1;  //temp�ܬ�-1����~
                    goto stop;  //���X�j�����stop�����e
                }

            counter = 0;    //counter�k�s
            for(int k = 0; k < number; k++){    //��k���ܤƧ@���ˬd
                if(plate[i+k][j+k] == 'Q'){
                    counter++;  //��Q�X�{�h�O��
                }
            }
                if(counter >= 2){   //8866
                    temp = -1;  //temp�ܬ�-1����~
                    goto stop;  //���X�j�����stop�����e
                }

            /*counter = 0;    //counter�k�s
            for(int k = 0; k < number; k++){    //��k���ܤƧ@���ˬd
                if(plate[i-k][j-k] == 'Q'){
                    counter++;  //��Q�X�{�h�O��
                }
            }
                if(counter >= 4){
                    temp = -1;  //temp�ܬ�-1����~
                    goto stop;  //���X�j�����stop�����e
                }*/

            counter = 0;    //counter�k�s
            for(int k = 0; k < number; k++){    //��k���ܤƧ@���ˬd
                if(plate[i+k][j-k] == 'Q'){
                    counter++;  //��Q�X�{�h�O��
                }
            }
                if(counter >= 2){   //86886
                    temp = -1;  //temp�ܬ�-1����~
                    goto stop;  //���X�j�����stop�����e
                }

            /*counter = 0;    //counter�k�s
            for(int k = 0; k < number; k++){    //��k���ܤƧ@���ˬd
                if(plate[i-k][j+k] == 'Q'){
                    counter++;  //��Q�X�{�h�O��
                }
            }
                if(counter >= 4){
                    temp = -1;  //temp�ܬ�-1����~
                    goto stop;  //���X�j�����stop�����e
                }*/
        }
    }

    stop:   //���X�j���A�̷�temp���H�U
        if(temp == -1){  //��temp = -1�h��
            printf("False\n");  //��XFalse
        }
        else{
            printf("True\n");   //��XTrue
        }

    for(int i = 0; i < number; i++){
        for(int j = 0; j <= number; j++){
            printf("%c", plate[i][j]);
        }
    }


    return 0;
}
