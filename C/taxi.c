#include <stdio.h>
#include <math.h>

int main(){
    float km;   //�]�w������
    int sec;    //�]�w�Ȱ��ɶ�
    int total = 70; //�]�w���70
    printf("%s\n\n%s\n%s", "�_�l����70���A�i��1.25km", "��J���h�֤����P���X��", "�`����(0.2km�p�O�@��)�G ");
    scanf("%f", &km);   //��J�@��h�֤���
    printf("%s", "�`��(80s�p�O�@��)�G ");
    scanf("%d", &sec);  //��J�@���h�֬�

    printf("\n%s", "�`���ꬰ�G ");

    if(km <= 1.25 && sec <= 80){    //�p�G�b1.25km�H�U�B80s�H�U�h��
        printf("%d", total);    //���������
    }
    else{   //�p�G�W�L�зǫh�̥t�@�M�W�h�[��
        km = (km - 1.25) / 0.2; //�C200m�h�����@���[������(���ަ��L���200m����@��)
        sec = sec / 80;         //�C80s�h�����@���[������
        total = total + ceil(km) * 5 + sec * 5; //��X�̫���B
        printf("%d\n", total);    //��X�̲ת��B
    }
}
