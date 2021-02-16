#include <stdio.h>
#include <stdlib.h>

int QQ(int x,int y){
    int t;
    while(y){
            t=x%y;
            x=y;
            y=t;
        }
    return x;
}

int main(){
    int a,b,gcd;
    scanf("%d",&a);
    while(scanf("%d",&b),b){
        gcd=QQ(a,b);
        a=a*b/gcd;
    }
    printf("%d\n",a);
    return 0;
}
