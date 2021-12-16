#include<stdio.h>
#include<string.h>
struct all
{
	char name[51],grade;
};
main()
{
	int count[8]={0,0,0};
	int i,j,k,n,m;
	scanf("%d %d",&m,&n);
	struct all a[m+1];
	struct all b[n+1];
	for(i=0;i<m;i++)
	{
		scanf("%s %c",a[i].name,&a[i].grade);
	}
	for(i=0;i<n;i++)
	{
		scanf("%s",b[i].name);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(a[i].name,b[j].name)==0)
			{
				if(a[i].grade=='a')
				{
					count[0]++;
				//	printf("%da\n",count[0]);
				}
				if(a[i].grade=='b')
				{
					count[1]++;
				//	printf("%db\n",count[1]);
				}
				if(a[i].grade=='c')
				{
					count[2]++;
					//printf("%dc\n",count[2]);
				}
			}
		}
	}
	for(i=0;i<3;i++)
	{
		if(count[i]>4)
		{
			printf("2\n");
		}
		if(count[i]==4)
		{
			printf("1\n");
		}
		if(count[i]<4)
		{
			printf("0\n");
		}
	}
	
}
