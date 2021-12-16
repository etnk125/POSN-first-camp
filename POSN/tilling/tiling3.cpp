#include<stdio.h>

void CH(){
int a,b,max=3,x,y,c;
scanf("%d %d",&a,&b);
c=max*max;
x=(max-1)*(max-1);
y=c-x;
while(1){
c=max*max;
x=(max-2)*(max-2);
y=c-x;
if(a<x||b<y){break;}
else{max++;}
}
printf("%d\n",max-1);
}
main(){
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++){CH();}
}
