#include <stdio.h>

long FIBON(long);

int main(){

 long n;    //設定所求費式數列的序列

 scanf("%ld",&n);   //輸入所求的第幾項

 printf("%ld", FIBON(n));   //輸出function FIBON的結果

}

long FIBON(long n){

 long a1 = 0, a2 = 1, a3 = 1;   //設定費式數列的前三項

 if(n <= 2){
    return 1;
 }   //如果輸入項目在2以內，則回傳1

 for(int i = 3; i <= n; i++){

   a1 = a2; //第一項值會變成第二項值

   a2 = a3; //第二項值會變成第三項值

   a3 = a1 + a2;    //第三項值會變成第一和第二值的和

 }

 return a3; //回傳第三項的值

}
