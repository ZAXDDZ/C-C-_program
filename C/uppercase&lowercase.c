#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char symbol;
    while(scanf("%c", &symbol)){
        if(symbol >= 'A' && symbol <= 'Z'){
            symbol = tolower(symbol);
        }
        else{
            symbol = toupper(symbol);
        }
        printf("%c", symbol);

        if(symbol == '\n'){
                break;}
    }
    return 0;
}

