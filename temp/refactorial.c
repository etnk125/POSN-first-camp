#include<stdio.h>
main(){
float a,c=0,d=1,e=0;
int b;
scanf("%f",&a);
for(b=1;b<=a;b++)
    {
    d*=b;
    c++;
    if(a/d>=1)e=c;
    }
printf("%.0f",e);
}
