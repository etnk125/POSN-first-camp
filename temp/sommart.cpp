#include<stdio.h>
main()
{
	int n,max_plan=-1;
	scanf("%d ",&n);
	char k[n+1];
	int j,l,i,mid,count=0,a[n];
	for(i=0;i<n;i++)
	{
		scanf(" %c",&k[i]);	
	}
	k[n]='x';
	n++;	
//	for(i=0;i<n;i++)printf("%c ",k[i]);
//	printf("\n");
	
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			if(k[i]=='o')a[i]=1;
			else a[i]=0;
		}
		else 
		{
			if(k[i]=='o')a[i]=a[i-1]+1;
			else 
			{
				a[i]=0;
				if(a[i-1]>0&&a[i-1]%2==1&&max_plan<a[i-1])
				{
					max_plan=a[i-1];
					mid=((i-1)+(i-a[i-1]+1))/2;
				}
			}
		}
	}
	
	
	
	if(max_plan==-1)printf("-1");
	else printf("%d",mid);
}


