#include<stdio.h>
int i,m0,m1,m_sum,n;
int seq(int a,int b,int c)
{
		int i,k[100]={0};
		k[0]=a;
		k[1]=b;
		for ( i=2;i<c;i++)
		{
			k[i]=k[i-1]+k[i-2];
		}
		return k[i-1];
}
main()
{
	int time;
	scanf("%d",&time);
for(int j=0;j<time;j++)
	{
	scanf("%d%d%d",&m0,&m1,&n);
	printf("%d\n",seq(m0,m1,n));
	}
}
