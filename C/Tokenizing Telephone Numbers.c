#include <stdio.h>
#include <string.h>
#define SIZE 20

int main(){
    char string[SIZE];  //�]�w���q���x�s���۸U
    char *stringx;  //�]�w�h���Ʀr�~�����U�r��

    fgets(string, SIZE, stdin); //��J�q��

    stringx = strtok(string, "()-");    //��Ū��o�Ǧr���h���L

    while(stringx != NULL){ //��P�_stringx���ONULL�ɫh��
            printf("%s", stringx);  //�̧ǿ�Xstringx
            stringx = strtok(NULL, "()-");  //�A���P�_���L�o�Ǧr��
    }

    puts("");

    return 0;
}
