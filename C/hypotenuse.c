#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hypotenuse(double, double, double);

int main(){
    double side1, side2, answer;
        printf("Enter side1: ");
        scanf("%lf", &side1);   //輸入三角形一邊
    while(side1 != 0){
        printf("Enter side2: ");
        scanf("%lf", &side2);   //輸入三角形另一邊
        printf("The hypotenuse is %.2f: \n", hypotenuse(side1, side2, answer)); //輸出最長邊
        printf("Enter side1: ");
        scanf("%lf", &side1);   //輸入三角形一邊
    }
}

double hypotenuse(double a, double b, double c){
    c = sqrt(a*a + b*b);
    return c;
}
