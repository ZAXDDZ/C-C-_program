#include <stdio.h>
#include <string.h>
#define SIZE 200

int main(){
    char string1[SIZE];
    char string2[SIZE];
    char *stringfix;
    int counter;

    gets(string1);
    gets(string2);

    stringfix = strstr(string1, string2);

    while(stringfix){
        printf("%s", stringfix);
        counter++;
        puts("");
        stringfix = strstr(stringfix + 1,string2);
        if(stringfix == NULL){
            puts("");
        }
    }
    return 0;
}
