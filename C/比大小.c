#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[4];
    for(int i=0; i<=2; i++){
        scanf("%d", &a[i]);
    }
    for(int i=1; i<=2; i++){
        for(int j=0; j<=1; j++){
            if(a[j] >= a[j+1]){
                a[3] = a[j];
                a[j] = a[j+1];
                a[j+1] = a[3];
            }
        }
    }
    printf("%d\n%d\n", a[2], a[0]);
    return 0;
}
