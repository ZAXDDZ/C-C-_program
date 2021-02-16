#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[100];
    gets(string);
    for(int i = 0; i < 100; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] = tolower(string[i]);
        }
        else if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] = toupper(string[i]);
        }
    }
    puts(string);
    puts("");
    return 0;
}
