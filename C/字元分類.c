#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    char string[SIZE];  //�]�w�x�s�@�q�r�ꪺstring
    gets(string);   //��J�@�qstring

    int counter_char = 0, counter_digit = 0, counter_space = 0, counter_others = 0;
    //�]�w�����r���ơB�Ʀr�ơB�Ů�ơB��L�ƪ�������
    int number = strlen(string);    //�]�w�iŪstring���ת���

    for(int i = 0; i < number; i++){    //���ƧPŪstring
        if(string[i] >= 'A' && string[i] <= 'Z'){   //��Ū��A~Z��
            counter_char++; //�NŪ�즸�ưO�U
        }

        else if(string[i] >= 'a' && string[i] <= 'z'){  //��Ū��a~z��
            counter_char++; //�NŪ�즸�ưO�U
        }

        else if(string[i] >= '1' && string[i] <= '9'){  //��Ū��1~9��
            counter_digit++;//�NŪ�즸�ưO�U
        }

        else if(string[i] == ' '){  //��Ū��Ů��
            counter_space++;//�NŪ�즸�ưO�U
        }

        else{
            counter_others = number - counter_char - counter_digit - counter_space;
        }
    }

    printf("%s%d\n%s%d\n%s%d\n%s%d\n", "alpha = ", counter_char,
                                       "digit = ", counter_digit,
                                       "space = ", counter_space,
                                       "others = ", counter_others);    //��X�U�������ƶq

    return 0;
}
