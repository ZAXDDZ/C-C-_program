#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float hour, rate, salary;
    printf("Enter # of hours worked (-1 to end):");
    scanf("%f", &hour);
    while(hour != -1){
        if(hour >= 0 && hour <= 40){
            printf("Enter hourly rate of the worker ($00.00):");
            scanf("%f", &rate);
            //salary = hour*rate;
            printf("Salary is $%.2f\n", hour*rate);

            printf("Enter # of hours worked (-1 to end):");
            scanf("%f", &hour);
        }
        else if(hour > 40){
            printf("Enter hourly rate of the worker ($00.00):");
            scanf("%f", &rate);
            //salary = hour*rate+(hour-40)/2*rate;
            printf("Salary is $%.2f\n", hour*rate+(hour-40)/2*rate);

            printf("Enter # of hours worked (-1 to end):");
            scanf("%f", &hour);
        }
        else{
            break;
        }
    }
    return 0;
}
