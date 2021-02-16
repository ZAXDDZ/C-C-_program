#include <stdio.h>
#include <stdlib.h>

int main(){
    char string1[100];
    char string2[100];
    int temp;

    fgets(string1, 100, stdin);
    fgets(string2, 100, stdin);

    for(int j = 0; j < 100; j++){
        if(string1[j] != string2[j]){
                temp = j;
            break;
        }
    }

    for(int k = temp; k < 100; k++){
        printf("%c", string2[k]);
        if(string2[k] == '\0'){
            break;
        }
    }
    printf("\n");
    return 0;
}
