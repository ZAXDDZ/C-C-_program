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

    for(int j = 0; j <= len_s2 - 1; j++){   //����Ū��string2���̫�@�r
        if(string1[j] != string2[j]){   //�p�Gstring1�Mstring2���ۦP���Ǭ����P�r��
                temp = j;   //�N�ĴX��m�����btemp
            break;
        }
    }

    for(int k = temp; k <= len_s2 - 1; k++){    //�qtempŪ��string2���̫�@�r
        printf("%c", string2[k]);   //��X��r�ꤣ�P�B
    }
    printf("\n");
    return 0;
}
