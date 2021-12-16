#include <stdio.h>
main(){
    int d,m,k,y,c,w;
    scanf("%d %d %d",&d,&m,&y);
    if(m<3){
	m=m+12;y--;}
    c=y/100;
    k=y%100;
    w=(d+(26*(m+1)/10)+(5*k/4)+(21*c/4))%7;
 switch ( w )
{
          case  2  :
                   printf("MON");
                   break;
          case  3  :
                   printf("TUE");
                   break;
          case  4  :
                   printf("WED");
                   break;
          case  5  :
                   printf("THU");
                   break;
          case  6  :
                   printf("FRI");
                   break;
          case  0  :
                   printf("SAT");
                   break;
          case  1  :
                   printf("SUN");
                   break;

}

}

