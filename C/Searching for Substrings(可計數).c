#include <stdio.h>
#include <string.h>
#define SIZE 200

int main(){
    char string1[SIZE]; //�]string1
    char string2[SIZE]; //�]string2
    char *stringfix;    //�]�x�sstring1�Mstring2�ۦP���r��
    int counter = 0;    //�]�������h�֦r�ۦP

    gets(string1);  //��Jstring1
    gets(string2);  //��Jstring2

    stringfix = strstr(string1, string2);   //��Mstring1�Mstring2�ۦP���r��

    while(stringfix){
        printf("%s\n", stringfix);  //�N�ۦP��string�����̧ǿ�X
        counter++;  //�C��X�@���ì����@��
        stringfix = strstr(stringfix + 1,string2);  //��M�U�qstring2�A���X�{���r�곡��
        if(stringfix == NULL){  //��Ū��NULL����
            puts("");   //����U�@��
        }
    }
    printf("%d\n", counter);    //��X�@���h�֬q�r��QŪ��
    return 0;
}
