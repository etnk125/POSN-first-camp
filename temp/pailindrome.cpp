#include<stdio.h>
#include<string.h>
int k=0;
char a[100]={'\0'} ;


int pail(char a[100],int b)
{
//	printf("%d",k);


	if(b-k==2&&a[k]==a[b])
	{
		return 1;
	}
	if(b-k==1&&a[k]==a[b])
	{
		return 1;
	}
	else if(a[k]==a[b])
	{
		k++;
		pail(a,b-1);
		
	} 
	else return 0;
}
main()
{
	
	gets(a);
//	printf("%s",a);
	int b=strlen(a);
	int c=pail(a,b-1);
		if(c==1||b==1)printf("Yes");
		else printf("No");
//	if(b%2==0)
//	{
//		int c=pail(a,b-1);
//		if(c==1)printf("Yes");
//		else printf("No");
//	}else
//	{	
//		int c=pail(a,b-1);
//		if(c==0)printf("No");
//		else printf("Yes");
//	}
}
