#include<stdio.h>
int n=2;
int prime(int a)
{
	if(a<=1)
	{
		return 0;
	}
	if(n<a)
	{
	if(a==2)
	{
		return 1;
	}
	else if(a%n==0)
	{
		return 0;
	}
	else	 
	{
		n++;
		prime(a);
	}
	}else return 1;
}
main()
{
	int a,b;
	scanf("%d",&a);
	b=prime(a);
	if(b==1)printf("Yes");
	else printf("No");
}
