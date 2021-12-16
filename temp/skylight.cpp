#include<stdio.h>
#include<math.h>
main()
{
	int n,m,light;
	int sum=0,k,j;
	int man;	
	scanf("%d %d %d %d %d",&m,&n,&k,&j,&man);
	for(int i=0;i<m*n;i++)
	{
		scanf("%d",&light);
		sum+=light;
	}sum=sum+k*j*man;
	printf("%.0f",ceil(float(sum)/float(man)));
}
