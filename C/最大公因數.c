#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);  //function gcd head

int main(){
    int number1, number2;   //set two variables
    scanf("%d%d", &number1, &number2);  //enter two numbers
    printf("%d\n", gcd(number1, number2));  //print function gcd return value
    return 0;
}

int gcd(int number_a, int number_b){    //function gcd start, and set two variables
    while(number_a > 0 && number_b > 0){    //when two variables > 0, keeping doing
        if(number_a > number_b){            //if the forward number more than the behind number, keeping doing
            number_a = number_a % number_b; //the behind number divides from the forward number, and get the reminder
        }
        else{                               //if the behind number more than the forward number, do below
            number_b = number_b % number_a; //the forward number divides from the behind number, and get the reminder
        }
    }
    if(number_a == 0){          //when the forward number equal 0, do
        return number_b;        //return the backward number value
    }
    else{                       //when the behind number equal 0, do
        return number_a;        //return the forward number value
    }
}
