#include<stdio.h>
main(){
	char a[100];
	int i,j,n=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=97&&a[i]<=122)printf("%c",a[i]);
		if(a[i]>=65&&a[i]<=90)printf("%c",a[i]);
	}
	
	
}
