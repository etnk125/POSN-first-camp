#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
	char a[1000],b[1000];
	int i,j,n=0,count=0,c=0;
	gets(b);
	for(i=0;b[i]!='\0';i++)
	{
		if(isalpha(b[i]))
		{
			a[c]=b[i];
			c++;
		}
	}
//	printf("%s\n",a);
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j]||a[i]==a[j]+32||a[i]==a[j]-32)
				{
					a[j]=' ';
				

				}
			}
		}
	}//printf("%s\n",a);
	for(i=0;a[i]!='\0';i++)
		if(isalpha(a[i]))
		{
			printf("%c",a[i])
		;}
	

	
}
