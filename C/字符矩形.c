#include <stdio.h>
#include <stdlib.h>

void printRec(int height, int weight, char symbol){
    for(int i = 0; i < height; i++){    //���ƥѤW��UŪ���Ȧ���
        for(int j = 0; j < weight; j++){    //���ƥѥ��ܥkŪ�e�Ȧ���
            printf("%c", symbol);   //��X��J�r��
        }
            printf("\n");
    }
}

int main(void){
    int height, weight; //�]�w���e
    char symbol;    //�]�w��ɦr��
    scanf("%d", &height);   //��J�����h��
    scanf("%d\n", &weight); //��J�e���h��
    scanf("%c", &symbol);   //��J��J�r������
    puts("");
    printRec(height, weight, symbol);   //����function printRec
    return 0;
}
