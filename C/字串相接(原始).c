#include <stdio.h>
#define SIZE 80

void mystery1(char *s1, const char *s2);

int main(){
    char string1[SIZE]; //�]�wstring1
    char string2[SIZE]; //�]�wstring2

    puts("Enter");
    scanf("%79s%79s", string1, string2);  //��Jstring1, string2��r��
    mystery1(string1, string2);           //�Nstring1, string2��Jfunction mystery1����
    printf("%s", string1);  //��X���槹��string1
}

void mystery1(char *s1, const char *s2){    //�]�wstring1�Mstring2������
    while(*s1 != '\0'){ //�����Ūs1����Ū���e
        ++s1;
    }
    for(; *s1 = *s2; ++s1, ++s2){
        ;
    }
}
