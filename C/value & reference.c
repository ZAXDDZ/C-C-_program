#include <stdio.h>
#include <stdlib.h>

void fun_value(int, int);
void fun_reference(int*, int*);

int main(){
    int number1, number2;
    scanf("%d%d", &number1, &number2);  //輸入兩個數

    int origin = number1;   //將number1的值複製到origin

    fun_value(number1, number2);    //執行fun_value
    printf("call by value of %d add %d is %d.\n\n", origin, number2 , number1);
    //將做完fun_value的各值輸出

    fun_reference(&number1, &number2);  //執行fun_reference
    printf("call by reference of %d add %d is %d.\n", origin ,number2 ,number1);
    //將做完fun_reference的各值輸出

    return 0;
}

void fun_value(int n_value1, int n_value2){
    //設n_value1對應number1，n_value2對應number2

    //int o_value = n_value1;
    n_value1 = n_value1 + n_value2; //n_value1重新計算，n_value2不變
}

void fun_reference(int *n_reference1, int *n_reference2){
    //設 *n_reference1對應&number1， *n_reference2對應&number2

    //int o_reference = *n_reference1;
    *n_reference1 = *n_reference1 + *n_reference2;  //*n_reference1重新計算，*n_reference不變
}
