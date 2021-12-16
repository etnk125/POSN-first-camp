#include<stdio.h>
main()
{
	int a[14]={0,31,28,31,30,31,30,31,31,30,31,30,31},d1,d2,m1,m2,i,j,sum=0,n;
	scanf("%d%d%d%d",&d1,&m1,&d2,&m2);
	if(m1==m2)
	{
		printf("%d",d2-d1+1);
	}else
	{
			for(i=m1+1;i<m2;i++)
		{
			sum+=a[i];
		}printf("%d",sum+(a[m1]-d1)+d2+1);
	}
	
	
	
}
