#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
abdif(int q,int p)
{	
	if(abs(q-p)<=10) 
	{
		return 1;
	}
	else 
	{
		return 0;
	}	
}
main()
{
	
	int n,c1,c2,c3;
	scanf("%d",&n);
	for (int k=0;k<n;k++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		int a[x+1][y+1];
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int max=INT_MIN;
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				if(abdif(a[i][j],a[i+1][j])==1&&i+1<=x)
				{
					if(max<a[i][j]+a[i+1][j])
					{
						c1=i;
						c2=j;
						max=a[i][j]+a[i+1][j];	
					
					}
					
				}
				if(abdif(a[i][j],a[i][j+1])==1&&j+1<=y)
				{
					if(a[i][j]+a[i][j+1]>max)
					{
						c1=i;
						c2=j;
						max=a[i][j]+a[i][j+1];
						
					}
					
				}
				
			}
			
		}


		printf("%d %d\n",c1+1,c2+1);
	}
}
