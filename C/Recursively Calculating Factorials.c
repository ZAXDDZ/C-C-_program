#include <stdio.h>
#include <stdlib.h>

void recursive(int, int);

int main(void){
    int number, factorials;
    scanf("%d", &number);
    recursive(number, factorials);
    return 0;
}
void recursive(int number, int factorials){
    factorials = 1;
    for(int counter=2; counter <= number; counter++){
        factorials = factorials*counter;
    }
    printf("%d\n", factorials);
}
