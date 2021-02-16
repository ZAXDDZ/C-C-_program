#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RESPONSES_SIZE 10 // define array sizes
#define FREQUENCY_SIZE 10



int main(){
    int a[10];
    int* aptr;
    int* aptr1;
    int* aptr2;
    int* aptr3;
    int x;
    aptr = &a[0];
    aptr1 = &a[1];
    aptr2 = aptr + 2;
    aptr3 = aptr2++;
    x = aptr2 - aptr1;
    printf("%p\n%p\n%p\n%p\n%p\n", aptr, aptr1, aptr2, aptr3, x);
    return 0;
}
