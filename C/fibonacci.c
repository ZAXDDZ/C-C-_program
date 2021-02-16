#include <stdio.h>

long FIBON(long);

int main(){

 long n;    //�]�w�ҨD�O���ƦC���ǦC

 scanf("%ld",&n);   //��J�ҨD���ĴX��

 printf("%ld", FIBON(n));   //��Xfunction FIBON�����G

}

long FIBON(long n){

 long a1 = 0, a2 = 1, a3 = 1;   //�]�w�O���ƦC���e�T��

 if(n <= 2){
    return 1;
 }   //�p�G��J���ئb2�H���A�h�^��1

 for(int i = 3; i <= n; i++){

   a1 = a2; //�Ĥ@���ȷ|�ܦ��ĤG����

   a2 = a3; //�ĤG���ȷ|�ܦ��ĤT����

   a3 = a1 + a2;    //�ĤT���ȷ|�ܦ��Ĥ@�M�ĤG�Ȫ��M

 }

 return a3; //�^�ǲĤT������

}
