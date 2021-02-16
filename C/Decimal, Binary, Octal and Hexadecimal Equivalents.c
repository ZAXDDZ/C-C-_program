#include <stdio.h>
#include <stdlib.h>

void binary(int);
void octal(int);
void hexadecimal(int);

int main(){
    int number;
    scanf("%d", &number);
    while(1){
        if(number >=0 && number <=255){
            printf("Decimal=%d\n", number);
            binary(number);
            octal(number);
            hexadecimal(number);
        break;
        }
        else{
            scanf("%d", &number);
            continue;
        }
    }
    return 0;
}

void binary(int number){
    int a[8];
    if(number != 0){
        printf("Binary=");
        for(int B_counter1=7; B_counter1>=0; B_counter1--){
            a[B_counter1] = number%2;
            number /=2;
        }
        for(int B_c = 0; B_c <= 7; B_c++){
            printf("%d", a[B_c]);
        }
        printf("\n");
    }
    else{
        printf("Binary=");
        for(int B_counter2=7; B_counter2>=0; B_counter2--){
            a[B_counter2]=0;
            printf("%d", a[B_counter2]);
        }
        printf("\n");
    }

}


void octal(int number){
    int b[3];
    if(number != 0){
        printf("Octal=");
        for(int O_counter1=2; O_counter1>=0; O_counter1--){
            b[O_counter1] = number%8;
            number /= 8;
        }
        for(int O_c = 0; O_c <= 2; O_c++){
            printf("%d", b[O_c]);
        }
        printf("\n");
    }
    else{
        printf("Octal=");
        for(int O_counter2=2; O_counter2>=0; O_counter2--){
            b[O_counter2] = 0;
            printf("%d", b[O_counter2]);
        }
        printf("\n");
    }
}


void hexadecimal(int number){
    int c[2];
    if(number != 0){
        printf("Hexadecimal=");
        for(int H_counter1=1; H_counter1>=0; H_counter1--){
            c[H_counter1] = number%16;
            number /= 16;
        }
        for(int H_c = 0; H_c <= 1; H_c++){
            if(c[H_c] <= 9){
                printf("%d", c[H_c]);
            }
            else if(c[H_c] == 10){
                printf("A");
            }
            else if(c[H_c] == 11){
                printf("B");
            }
            else if(c[H_c] == 12){
                printf("C");
            }
            else if(c[H_c] == 13){
                printf("D");
            }
            else if(c[H_c] == 14){
                printf("E");
            }
            else if(c[H_c] == 15){
                printf("F");
            }
            else{
                printf("%d", c[H_c]);
            }
    }
        printf("\n");
}
    else{
        printf("Hexadecimal=");
        for(int H_counter2=1; H_counter2>=0; H_counter2--){
            c[H_counter2] = 0;
            printf("%d", c[H_counter2]);
        }
        printf("\n");
    }
}
