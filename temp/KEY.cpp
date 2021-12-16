#include<stdio.h>
int main()
{
	int n,m,k,c=0,i,j;
	scanf("%d %d",&n,&m);
	int a[n][3],b[m][3];
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i][0],&a[i][1]);
	for(j=0;j<m;j++)
	{
		scanf("%d %d %d",&b[j][0],&b[j][1],&k);
		for(i=0;i<n;i++)
		{
			if(a[i][0] <= b[j][0]+k && a[i][0] >= b[j][0]-k)
				if(a[i][1] <= b[j][1]+k && a[i][1] >= b[j][1]-k )
				{
					printf("-%d %d\n",a[i][0],a[i][1]);
					c++;
				}
		}
	}
	printf("%d\n%d",c,m);
}

