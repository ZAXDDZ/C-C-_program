#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hypotenuse(double, double, double);

int main(){
    double side1, side2, answer;
        printf("Enter side1: ");
        scanf("%lf", &side1);   //��J�T���Τ@��
    while(side1 != 0){
        printf("Enter side2: ");
        scanf("%lf", &side2);   //��J�T���Υt�@��
        printf("The hypotenuse is %.2f: \n", hypotenuse(side1, side2, answer)); //��X�̪���
        printf("Enter side1: ");
        scanf("%lf", &side1);   //��J�T���Τ@��
    }
}

double hypotenuse(double a, double b, double c){
    c = sqrt(a*a + b*b);
    return c;
}
