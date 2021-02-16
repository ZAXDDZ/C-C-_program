#include <stdio.h>
#include <stdlib.h>

void fun_value(int, int);
void fun_reference(int*, int*);

int main(){
    int number1, number2;
    scanf("%d%d", &number1, &number2);  //��J��Ӽ�

    int origin = number1;   //�Nnumber1���Ƚƻs��origin

    fun_value(number1, number2);    //����fun_value
    printf("call by value of %d add %d is %d.\n\n", origin, number2 , number1);
    //�N����fun_value���U�ȿ�X

    fun_reference(&number1, &number2);  //����fun_reference
    printf("call by reference of %d add %d is %d.\n", origin ,number2 ,number1);
    //�N����fun_reference���U�ȿ�X

    return 0;
}

void fun_value(int n_value1, int n_value2){
    //�]n_value1����number1�An_value2����number2

    //int o_value = n_value1;
    n_value1 = n_value1 + n_value2; //n_value1���s�p��An_value2����
}

void fun_reference(int *n_reference1, int *n_reference2){
    //�] *n_reference1����&number1�A *n_reference2����&number2

    //int o_reference = *n_reference1;
    *n_reference1 = *n_reference1 + *n_reference2;  //*n_reference1���s�p��A*n_reference����
}
