#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    char stringA[SIZE];
    char stringB[SIZE];
    int counter = 0;

    puts("��J�r��A");
    gets(stringA);
    puts("��J�n��M���ƪ��r��B");
    gets(stringB);
    puts("");

    char *stringX = strstr(stringA, stringB);   //�x�s�����X�{stringA�MstringB�ۦP�B

    while(stringX != NULL){ //�u�nstringX�SŪ��NULL�h����
        counter++;  //stringB���Ʀ���+1
        stringX = strstr(stringX + 1, stringB); //�A���P�_
        if(stringX == NULL){    //��Ū��NULL
            break;  //���X�j��
        }
    }

    printf("%s%s\n%d\n", stringB, "�����Ƭ�", counter); //��XstringB�X�{����
    return 0;
}
