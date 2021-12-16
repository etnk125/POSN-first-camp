#include<stdio.h>
#include<string.h>
int k=0;
char a[100]={'\0'} ;

int rev(char a[100],int b)
{
	if(b>-1)
	{
		printf("%c",a[b]);
		rev(a,b-1);
	}


}
main()
{
	
	gets(a);
	int b=strlen(a);
	rev(a,b-1);

}
