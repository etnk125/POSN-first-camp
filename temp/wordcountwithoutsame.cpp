#include<stdio.h>
main(){
	char a[100];
	int i,j,n=0,count=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=97&&a[i]<=122)a[i]-=32;
	}
	n=i+1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j]&&a[i]>=65&&a[i]<=90)
			{
				a[j]=' ';
				
			}
		}
	}

	
	for(i=0;i<n;i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			count++;
		
		}
	}
	printf("%d",count);
	
	
}
