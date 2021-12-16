#include <stdio.h>
main(){
    int a ;
    scanf("%d",&a);
    printf("1000 = %d\n",a/1000);
    a=a%1000;
    printf("500 = %d\n",a/500);
    a%=500;
    printf("100 = %d\n",a/100);
    a%=100;
    printf("50 = %d\n",a/50);
    a%=50;
    printf("20 = %d\n",a/20);
    a%=20;
    printf("10 = %d\n",a/10);
    a%=10;
    printf("5 = %d\n",a/5);
    a%=5;
    printf("1 = %d\n",a/1);








}

