#include <stdio.h>
main(){
    int a=0,b=0,i;
    char c[10000];
    gets(c);
for(i=0;i<10000;i++)
{
    if(122>=c[i]&&c[i]>=97)a++;
    else if(65<=c[i]&&c[i]<=90)b++;
    else break;
}
if (a==0&&b!=0)printf("All Capital Letter");
if (a!=0&&b==0)printf("All Small Letter");
if (a!=0&&b!=0)printf("Mix");


}
