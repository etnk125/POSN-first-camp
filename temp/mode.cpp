#include<stdio.h>
#include<math.h>
main(){
	
	int i,j,n,count[100]={0},max=-100,p,maxx;
	scanf(" %d ",&n);
	int a[n];
	for(i=0;i<100;i++)
	{
		count[i]=0;
		a[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])//&&i!=j)
			{
				count[a[i]]++;
			//	printf("%d %d\n",a[i],count[a[i]]);
			
			}
		}
	}
//	printf("\n\n");
	for(i=0;i<100;i++)
	{
		if(count[i]>=max)
		{
			max=count[i];
			maxx=sqrt(max);
			p=i;
		//	printf("%d %d\n",p,maxx);
		}
	}
	printf("%d %d",p,maxx);
	
	
}
